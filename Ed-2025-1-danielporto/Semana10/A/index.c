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

    int n, input;
    scanf("%d", &n);
    Stack* stack = createStack();

    while(n--){
        scanf("%d", &input);
        if(input == 0){
            Node* trash = stackPop(stack);
            free(trash);
        } else {
            stackPush(stack, input);
        }
    }
    int sum = 0;
    while(stack->top != NULL){
        sum+= stack->top->val;
        stack->top = stack->top->next;
    }

    printf("%d\n", sum);
    return 0;
}