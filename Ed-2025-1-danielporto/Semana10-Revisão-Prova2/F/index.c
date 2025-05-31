#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char val[40];
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

void push(Stack* stack, char* val){
    Node* newNode = malloc(sizeof(Node));
    memcpy(newNode->val, val, 40);
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

char* addInBuffer(char* buffer, int* bufferSize, char val){
    (*bufferSize)++;
    buffer = realloc(buffer, *bufferSize+1);
    buffer[*bufferSize-1] = val;
    buffer[*bufferSize] = '\0';
    return buffer;
} 


int main(){
    int n;
    scanf("%d", &n);
    Stack* vertical = createStack();
    Stack* horizontal = createStack();
    Stack* target = createStack();
    char input[40];

    char *ansBuffer = malloc(1);
    int ansSize = 0;
    ansBuffer[0] = '\0';
    

    for(int i =0; i<n; i++){
        scanf("%s", input);
        push(horizontal, input);
    }
    for(int i =0; i<n; i++){
        scanf("%s", input);
        push(target, input);
    }

    int valid = 1;
    while(target->top != NULL){
        if(horizontal->top != NULL && strcmp(horizontal->top->val, target->top->val) == 0){ // MOVE DO INICAL PRO FINAL
            ansBuffer = addInBuffer(ansBuffer, &ansSize, 'M');
            Node* trash = pop(horizontal);
            Node* trash2 = pop(target);
            free(trash);
            free(trash2);
        } else if(vertical->top != NULL && strcmp(vertical->top->val, target->top->val) == 0){ // Move da reservada pra final 
            ansBuffer = addInBuffer(ansBuffer, &ansSize, 'R');
            Node* trash = pop(vertical);
            Node* trash2 = pop(target);
            free(trash);
            free(trash2);
        } else if(horizontal->top != NULL){
            ansBuffer = addInBuffer(ansBuffer, &ansSize, 'G');
            Node* temp = pop(horizontal);
            push(vertical, temp->val);
            free(temp);
        } else {
            printf("Defeito de fabrica!");
            valid = 0;
            break;
        }
    }

    if(valid == 1){
        printf("%s", ansBuffer);
    }

    printf("\n");
}