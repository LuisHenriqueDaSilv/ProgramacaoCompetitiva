#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char* color;
    char* type;
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

void stackPush(Stack* stack, char* type, char* color){
    Node* new_node = malloc(sizeof(Node));
    // new_node->val = val;
    new_node->color = malloc(sizeof(char)*55);
    new_node->type = malloc(sizeof(char)*55);
    memcpy(new_node->color, color, 55);
    memcpy(new_node->type, type, 55);
    
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
    char inputa[55];
    char inputb[55];
    int inputc;
    int cnt = 0;
    int time = 0;
    Stack* stack = createStack();
    while(1){
        scanf(" %s %s %d", inputa, inputb, &inputc);
        if(strcmp(inputa, "end") == 0){break;}
        stackPush(stack, inputa, inputb);
        cnt++;
        time+=inputc;
    }

    while(stack->top != NULL){
        Node* node = stackPop(stack);
        printf("Tipo: %s Cor: %s\n", node->type, node->color);
    }

    printf("Total de roupas = %d\n", cnt);
    printf("Total de tempo = %d\n", time);
    return 0;
}