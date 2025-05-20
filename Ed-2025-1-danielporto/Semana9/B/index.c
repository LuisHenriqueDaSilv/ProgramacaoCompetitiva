#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int i;
    int r;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node *tail;
} Queue;

Queue* create_queue(){
    Queue* queue = malloc(sizeof(Queue));
    queue->head = malloc(sizeof(Node));
    queue->tail = queue->head;
    return queue;
}

int main(){
    int t,n,i, r;
    scanf("%d", &t);
    int sec = 0;
    while(t--){

        scanf("%d", &n);
        Queue *queue = create_queue();
        for(int i=0; i<n; i++){
            scanf("%d %d", &queue->tail->i, &queue->tail->r);
            if(i!=n-1){
                queue->tail->next = malloc(sizeof(Node));
                queue->tail = queue->tail->next;
            } else {
                queue->tail->next = NULL;
            }
        }

        int currentTime = 0;
        while(queue->head){
            if(queue->head->i > currentTime){
                currentTime = queue->head->i;
            }
            if(queue->head->r >= currentTime){
                printf("%d ", currentTime);
                currentTime++;
            } else {
                printf("0 ");
            }
            Node* temp = queue->head;
            queue->head = queue->head->next;
            free(temp);
        }

        printf("\n");

    }

    return 0;
}