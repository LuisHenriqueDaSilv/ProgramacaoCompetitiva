#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int s;
    int c;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
    int size;
} Stack;

Stack* createStack(){
    Stack* stack = malloc(sizeof(Stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}

void stackPush(Stack* stack, int c, int s ){
    Node* new_node = malloc(sizeof(Node));
    new_node->s = s;
    new_node->c = c;
    new_node->next = stack->top;
    stack->top = new_node;
    stack->size++;
}

Node* stackPop(Stack* stack){
    if(stack->top == NULL){
        return NULL;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    stack->size--;
    return temp;
}

int main(){
    int t, n,k, cIn, sIn;
    scanf("%d %d", &n, &k);
    while(n || k){
        if(k == 0 && n == 0) break;

        Stack* stack = createStack();
        int possible = 1;
        for(int i = 0; i<n; i++){
            scanf("%d %d", &cIn, &sIn);
            while(stack->top != NULL && stack->top->s <= cIn){
                Node* out = stackPop(stack);
                free(out);
            }
            if(stack->size >= k){
                possible = 0;
            } else {
                if(stack->size == 0){
                    stackPush(stack, cIn, sIn);
                } else {
                    if(stack->top->s > sIn){
                        stackPush(stack, cIn, sIn);
                    } else {
                        possible = 0;
                    }
                }
            }
        }
        while(stack->top){
            Node* out = stackPop(stack);
            free(out);
        }

        free(stack);

        if(possible == 1){
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }

        scanf("%d %d", &n, &k);
    }
}