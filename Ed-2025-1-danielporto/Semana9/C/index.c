#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int checkIfIsValid(Node *head, int n){

    int found = 0;
    while(head!=NULL){
        if(head->val == n) {
            found = 1;
            break;
        };
        head = head->next;
    }

    return !found;
}

int main(){
    int n, input, ans = 0, current = 0;
    scanf("%d", &n);

    Node *head = NULL;
    Node *tail = NULL;
    while(n--){
        scanf("%d", &input);

        if(checkIfIsValid(head, input)){
            Node *newNode = malloc(sizeof(Node));
            newNode->val = input;
            newNode->next = NULL;
            
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            current++;
        } else {
            while (head != NULL && head->val != input) {
                Node *temp = head;
                head = head->next;
                free(temp);
                current--;
            }

            if (head != NULL) {
                Node *temp = head;
                head = head->next;
                free(temp);
                current--;
            }

            Node *newNode = malloc(sizeof(Node));
            newNode->val = input;
            newNode->next = NULL;
            
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            current++;
        }
    };

    if(current > ans){
        ans = current;
    }

    printf("%d\n", ans);
    return 0;
}