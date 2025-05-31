#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;  
} Node;

typedef struct Stack {
    Node* top;
} Stack;


Stack* createStack(){
    Stack* stack = malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, int val){
    Node* newNode = malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = stack->top;
    stack->top = newNode;
}

Node* pop(Stack* stack){
    if (stack->top == NULL) {
        return NULL;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    return temp;
}

int main(){
    int q, t,x;
    scanf("%d", &q);
    Stack* stack = createStack();
    while(q--){
        scanf("%d", &t);
        if(t == 1){
            scanf("%d", &x);
            push(stack, x);
        } else {
            Node* card = pop(stack);
            if (card == NULL){
                printf("0\n");
                continue;  
            } 
            printf("%d\n", card->val);
            free(card);
        }
    }

    return 0;
}