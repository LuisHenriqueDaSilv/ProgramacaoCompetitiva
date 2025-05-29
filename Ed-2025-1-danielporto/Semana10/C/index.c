#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char val;
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

void stackPush(Stack* stack, int val){
    Node* new_node = malloc(sizeof(Node));
    new_node->val = val;
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

void removeLastCase(Stack* stack, int mode){
    Node* act = stack->top;
    Node* prev = NULL;
    Node* ult = NULL;
    Node* ult_ant = NULL;

    while (act != NULL) {
        char c = act->val;
        int change = 0;
        if ((mode && c >= 'A' && c <= 'Z') || (!mode && c >= 'a' && c <= 'z')) {
            ult = act;
            ult_ant = prev;
            break;
        }
        prev = act;
        act = act->next;
    }

    if (ult != NULL) {
        if (ult_ant == NULL) {
            stack->top = ult->next;
        } else {
            ult_ant->next = ult->next;
        }
        free(ult);
        stack->size--;
    }
}




int main(){
    int t, n;
    char let, input;
    scanf("%d", &t);
    while(t--){
        Stack* stack = createStack();
        scanf("%d %c\n", &n, &let);

        for(int i =0; i<n; i++){
            scanf(" %c", &input);
            if(input == let){ removeLastCase(stack, 0); } 
            else if(input+32 == let) { removeLastCase(stack, 1); } 
            else { stackPush(stack, input); }
        }

        char* ans = malloc((stack->size + 1) * sizeof(char));
        Node* curr = stack->top;
        int idx = stack->size - 1;

        while (curr != NULL) {
            ans[idx--] = curr->val;
            curr = curr->next;
        }
        ans[stack->size] = '\0';

        printf("%s\n", ans);

        free(ans);
    }

}