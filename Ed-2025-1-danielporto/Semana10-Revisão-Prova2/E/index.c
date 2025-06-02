//Gerado por IA:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
    int count;
} Stack;

Node* createNode(int val) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = val;
    node->next = NULL;
    return node;
}

void push(Stack *s, int val) {
    Node* node = createNode(val);
    node->next = s->top;
    s->top = node;
    s->count++;
}

int pop(Stack *s) {
    if (s->top == NULL) return -1;
    Node* temp = s->top;
    int val = temp->val;
    s->top = temp->next;
    free(temp);
    s->count--;
    return val;
}

int size(Stack *s) {
    return s->count;
}

void clear(Stack *s) {
    while (s->top != NULL) {
        Node* temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    s->count = 0;
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        Stack pile1 = {NULL, 0}, pile2 = {NULL, 0};

        char cmd[10];
        int m;

        for (int i = 0; i < n; i++) {
            scanf("%s %d", cmd, &m);
            if (strcmp(cmd, "DROP") == 0) {
                printf("DROP 1 %d\n", m);
                for (int j = 0; j < m; j++) push(&pile1, 1);
            } else {
                while (m > 0) {
                    if (size(&pile2) > 0) {
                        int takeAmount = m < size(&pile2) ? m : size(&pile2);
                        printf("TAKE 2 %d\n", takeAmount);
                        for (int j = 0; j < takeAmount; j++) pop(&pile2);
                        m -= takeAmount;
                    } else if (size(&pile1) > 0) {
                        int moveAmount = size(&pile1);
                        printf("MOVE 1->2 %d\n", moveAmount);
                        while (size(&pile1) > 0) {
                            push(&pile2, pop(&pile1));
                        }
                    }
                }
            }
        }

        printf("\n");
        clear(&pile1);
        clear(&pile2);
    }

    return 0;
}
