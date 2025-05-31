#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* head;
    Node* tail;
} Queue;

Queue* createQueue(){
    Queue* queue = malloc(sizeof(Queue));
    queue->head = NULL;
    queue->tail = NULL;
    return queue;
}

void enqueue(Queue* queue, int val){
    Node* newNode = malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    if(queue->tail != NULL){
        queue->tail->next = newNode;
        queue->tail = queue->tail->next;
    } else {
        queue->tail = newNode;
        queue->head = newNode;
    }
}

Node* dequeue(Queue* queue){
    if(queue->head == NULL){
        return NULL;
    }
    Node* temp = queue->head;
    queue->head = queue->head->next;
    if(queue->head == NULL){
        queue->tail = NULL;
    }
    return temp;
}

int main(){
    int q, x, t;
    Queue* queue = createQueue();
    scanf("%d", &q);
    while(q--){
        scanf("%d", &t);
        if(t==1){
            scanf("%d", &x);
            enqueue(queue, x);
        } else {
            Node* client = dequeue(queue);
            if(client == NULL){continue;}
            printf("%d\n", client->val);
            free(client);
        }
    }
    
}