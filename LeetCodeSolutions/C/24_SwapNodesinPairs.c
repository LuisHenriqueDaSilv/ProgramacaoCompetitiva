#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *tail = head;
    int tmp;
    while(tail != NULL){
        if(tail->next != NULL){
            tmp = tail->val;
            tail->val = tail->next->val;
            tail->next->val = tmp;
            tail = tail->next->next;
        } else {
            tail = NULL;
        }
    }

    return head;
}