#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char val;
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

void enqueue(Queue* queue, char val){
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

Node* removeByValue(Queue* queue, char target) {
    Node* cur = queue->head;
    Node* prev = NULL;

    while (cur != NULL && cur->val != target) {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL) {
        return NULL;
    }

    if (prev == NULL) {
        queue->head = cur->next;
        if (queue->head == NULL) {
            queue->tail = NULL;
        }
    } else {
        prev->next = cur->next;
        if (cur == queue->tail) {
            queue->tail = prev;
        }
    }

    return cur;
}

int main(){
    int n;
    char c;
    scanf("%d", &n);
    Queue* queue = createQueue();
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        enqueue(queue, c);
    }

    while (1) {
        Node* senator = dequeue(queue);
        if (!senator) break;

        char enemy = senator->val == 'I' ? 'R' : 'I';
        Node* banned = removeByValue(queue, enemy);

        enqueue(queue, senator->val);

        if (banned != NULL) {
            free(banned);
        } else {
            printf("%s\n", senator->val == 'I' ? "Imperio" : "Republica");
            free(senator);
            break;
        }

        free(senator);
    }
    return 0;

}