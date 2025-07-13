#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 30

typedef struct ListNode {
    char word[32];
    struct ListNode* next;
} ListNode;

unsigned int hash(char* word){
    int length = strlen(word);
    unsigned int hash = 0;
    for(int i = 0; i<length; i++){
        hash+=word[i];
        hash=(hash*word[i])%TABLE_SIZE;
    }
    return hash;
}

struct ListNode* hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i = 0; i< TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
}

void insert_in_hash_table(char* word){
    unsigned int index = hash(word);
    ListNode* newNode = malloc(sizeof(ListNode));
    strcpy(newNode->word, word);
    newNode->next = NULL;
    if(hash_table[index] == NULL){
        hash_table[index] = newNode;
    } else {
        ListNode* cop = hash_table[index];
        while(cop->next != NULL){
            cop = cop->next;
        }
        cop->next = newNode;
    }
}

int check_if_exists(char* word){
    unsigned int index = hash(word);
    if(hash_table[index] == NULL){
        return 0;
    }

    if(strcmp(word, hash_table[index]->word) == 0){
        strcpy(hash_table[index]->word, "\0");
        return 1;
    }
    ListNode* cop = hash_table[index]->next;
    while(cop!=NULL){
        if(strcmp(word, cop->word) == 0){
            strcpy(cop->word, "\0");
            return 1;
        }   
        cop = cop->next;
    }

    return 0;
}

int main(){
    int n, m, exists;
    char word[32];
    scanf("%d %d\n", &m,&n);
    init_hash_table();
    for(int i = 0; i<m; i++){
        scanf("%s", word);
        insert_in_hash_table(word);
    }
    for(int i = 0; i<n; i++){
        scanf("%s", word);
        exists = check_if_exists(word);
        if(exists == 0){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}