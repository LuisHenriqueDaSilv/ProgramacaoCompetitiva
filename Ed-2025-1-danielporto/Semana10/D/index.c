#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

Stack* createStack(){
    Stack* stack = malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void stackPush(Stack* stack, int val){
    Node* new_node = malloc(sizeof(Node));
    new_node->val = val;
    new_node->next = stack->top;
    stack->top = new_node;
}

Node* stackPop(Stack* stack){
    if(stack->top == NULL){
        return NULL;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    return temp;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    while(m--){
        int outSequenc[n];
        scanf("%d", &outSequenc[0]);
        if (outSequenc[0] == 0) {
            printf("\n");
            break;
        }
        for (int i = 1; i < n; i++) {
            scanf("%d", &outSequenc[i]);
        }

        Stack* estacao = createStack();
        int nextIn = 1;
        int nextOut = 0;

        while(nextIn<=n){
            stackPush(estacao, nextIn);
            while(estacao->top != NULL && estacao->top->val == outSequenc[nextOut]){
                Node* trash = stackPop(estacao);
                free(trash);
                nextOut++;
            }
            nextIn++;
        }            

        if(nextOut == n){
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
    }
}