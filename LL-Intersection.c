/**
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    struct ListNode* newA = headA;
    
    while(headB != NULL){
        while(newA != NULL){
            if(&newA->val == &headB->val){
                return newA;
            }else{
                newA = newA->next;
            }
        }
        headB = headB->next;
        newA = headA;
    }

    return NULL;
}