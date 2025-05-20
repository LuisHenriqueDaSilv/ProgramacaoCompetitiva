/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* ansHead = malloc(sizeof(struct ListNode));
    struct ListNode* ansTail = ansHead;
    int carry=0, curSum;
    ansTail->next = NULL;

    while(l1 != NULL || l2 != NULL || carry!=0){
        curSum = 0;

        if(l1 != NULL){
            curSum += l1->val;
            l1 = l1->next;
        }
        if(l2!= NULL){
            curSum += l2->val;
            l2 = l2->next;
        }
        curSum+=carry;
        carry = curSum/10;
        ansTail->val = curSum%10;
        if(l1!=NULL || l2 != NULL || carry!=0){
            ansTail->next = malloc(sizeof(struct ListNode));
            ansTail = ansTail->next;
            ansTail->next = NULL;
        }
    }

    return ansHead;
}