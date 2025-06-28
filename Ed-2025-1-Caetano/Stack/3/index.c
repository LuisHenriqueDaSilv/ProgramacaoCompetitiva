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
    Stack* stack = createStack();
    int input, target;
    while(1){
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        stackPush(stack, input);
    }
    scanf("%d", &target);
    int cnt = 0;
    int sum = 0;
    while(stack->top!=NULL){
        Node* node = stackPop(stack);
        if(node->val == target){
            break;
        }
        sum+=node->val;
        cnt++;
        printf("Peso retirado: %d\n", node->val);
        free(node);
    }
    printf("Anilhas retiradas: %d\n", cnt);
    printf("Peso retirado: %d\n", sum);
    return 0;
}