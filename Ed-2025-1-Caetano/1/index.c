#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct CharNode {
    char* val;
    struct CharNode* next; 
} CharNode;

typedef struct Stack {
    CharNode* top;
}Stack;

Stack* createStack(){
    Stack* stack = malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void stackPush(Stack* stack, char* val){
    CharNode* newNode = malloc(sizeof(CharNode));
    newNode->next = stack->top;
    newNode->val = malloc(100*sizeof(char)+1);
    memcpy(newNode->val,val,100);
    stack->top = newNode;
}

CharNode* popStack(Stack* stack){
    if(stack->top != NULL){
        CharNode* temp = stack->top;
        stack->top = stack->top->next;
        return temp;
    } else {
        return NULL;
    }
}

int main(){

    Stack* numbersStack = createStack();
    Stack* charStack = createStack();
    char input[100];
    while(1){
        scanf("%s", input);
        if(strcmp(input, "end") == 0){
            break;
        }
        int isNumber = 1;
        for(int i = 0; i<strlen(input); i++){
            if(isdigit(input[i]) != 0){
                isNumber = 0;
                break;
            }
        }

        if(isNumber == 0){            
            stackPush(numbersStack, input);
        } else {
            stackPush(charStack, input);
        }
    }

    printf("Palavras:\n");
    while(charStack->top != NULL){
        CharNode* node = popStack(charStack);
        printf("%s\n", node->val);
        free(node->val);
        free(node);
    }

    printf("Numeros:\n");
    while(numbersStack->top != NULL){
        CharNode* node = popStack(numbersStack);
        printf("%s\n", node->val);
        free(node->val);
        free(node);
    }
}