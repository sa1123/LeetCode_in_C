/**
 * https://leetcode.com/problems/palindrome-linked-list/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* findMid(struct ListNode* start){
    struct ListNode* slow = start;
    struct ListNode* fast = start;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return(slow);
}

struct ListNode* reverseLL(struct ListNode* start){
    struct ListNode* prev = NULL;
    struct ListNode* curr = start;
    while(curr!=NULL){
        struct ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    // printLL(prev);

    return prev;
}

bool compareLLs(struct ListNode* first, struct ListNode* second){
    while(first!=NULL && second!=NULL){
        if(first->val != second->val){
            return false;
        }
        first = first->next;
        second = second->next;
    }
    return true;
}

// void printLL(struct ListNode* start){
//     while(start != NULL){
//         printf("%d\t", start->val);
//         start = start->next;
//     }
// }

bool isPalindrome(struct ListNode* head){

    if(head == NULL || head->next == NULL){
        return true;
    }

    if(head->next->next == NULL){
        if(head->val == head->next->val){
            return true;
        } else {
            return false;
        }
    }

    return(compareLLs(reverseLL(findMid(head)), head));
}