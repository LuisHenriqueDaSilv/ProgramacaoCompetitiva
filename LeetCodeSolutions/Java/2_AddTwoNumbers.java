/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ansHead = new ListNode();
        ansHead.next = null;
        ListNode ansTail = ansHead;
        int carry = 0, curSum = 0;
        while(l1!= null || l2!=null || carry!=0){
            curSum = 0;
            if(l1!=null){
                curSum += l1.val;
                l1 = l1.next;
            }
            if(l2!=null){
                curSum += l2.val;
                l2 = l2.next;
            }
            curSum+= carry;
            carry = curSum/10;
            ansTail.val = curSum%10;
            if(l1!=null || l2!=null || carry!=0){
                ansTail.next = new ListNode();
                ansTail = ansTail.next;
            }
        }
        return ansHead;
    }
}