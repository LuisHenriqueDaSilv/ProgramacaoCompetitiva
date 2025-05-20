/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
*/

typedef struct Queue {
    struct ListNode **values;
    int n;
    int capacity;
} Queue;

Queue *createQueue(int n){
    Queue *queue = malloc(sizeof(Queue));
    queue->values = malloc(n*sizeof(struct ListNode*));
    queue->n = 0;
    queue->capacity = n;
    return queue;
}

void addInQueue(struct ListNode *newNode, Queue *queue){
    if(queue->n == queue->capacity){
        for(int i = 1; i<queue->n; i++){
            queue->values[i-1] = queue->values[i];
        }
        queue->values[queue->n-1] = newNode;
    } else {
        queue->values[queue->n] = newNode;
        queue->n++;
    }
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *tail = head;

    Queue *queue = createQueue(n+1);
    while(tail != NULL){
        addInQueue(tail, queue);
        tail = tail->next;
    }
    if(queue->n == n){
        head = head->next;
    } else if(queue->n == 1){
        return NULL;
    } else {
        queue->values[0]->next = queue->values[1]->next;
    }

    return head;
}