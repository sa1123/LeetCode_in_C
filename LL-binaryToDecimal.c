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
        if(head->val == 0){
            ans*=2;
        }else{
            ans = ans * 2 + 1;
        }
        head = head->next;
    }
    return ans;
}