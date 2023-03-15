/**
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL){
        return head;
    }

    while(head!=NULL && head->val==val){
        head = head->next;
    }

    struct ListNode* returnHead = head;
    struct ListNode* prev = NULL;

    while(head!=NULL){
        if(head->val == val){
            if(prev!=NULL){
                prev->next = prev->next->next;
            }
            head = head->next;
        }else{
            prev = head;
            head = head->next;
        }
    }

    if(prev == NULL){
        return head;
    }else{
        return returnHead;
    }
}