/**
 * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
    int ans = 0;

    while(head != NULL){
        ans = ans * 2 + head->val;
        head = head->next;
    }
    return ans;
}