#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 131071

typedef struct listNode{
    struct listNode* next;
    int val;
    int index;
} listNode;

listNode* table[TABLE_SIZE] = {NULL};

unsigned int hash(int val){
    unsigned int index = (unsigned int)(val > 0? val:-val);
    index = index % TABLE_SIZE;
    return index;
}

void add_in_table(int val, int index_) {
    unsigned int index = hash(val);
    listNode* newNode = malloc(sizeof(listNode));
    newNode->val = val;
    newNode->index = index_;
    newNode->next = table[index];
    table[index] = newNode;
}


listNode* search_in_table(int val){
    int index = hash(val);
    if(table[index] == NULL){
        return NULL;
    }  
    listNode* cop = table[index];
    while(cop!= NULL){
        if(cop->val == val){
            return cop;
        }
        cop = cop->next;
    }

    return NULL;
}

int main(){
    int n, x, li, comp;
    scanf("%d %d", &n, &x);

    for(int i = 0; i<n; i++){
        scanf("%d", &li);
        listNode* inTable = search_in_table(li);
        if(inTable == NULL){
            add_in_table(x-li, i);
        } else {
            printf("%d %d\n", inTable->index+1, i+1);
            return 0;
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;

}