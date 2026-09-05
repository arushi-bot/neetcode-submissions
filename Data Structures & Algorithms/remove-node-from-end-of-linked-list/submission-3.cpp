/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return head;
        }
        if(head->next == nullptr && n>=1){
            return nullptr;
        }

        ListNode* curr=head;
        int size=0;
        while(curr){
            size++;
            curr = curr->next;
        }
        curr = head;
        int i = 0 ,j = size - n;
        if(j == 0){
            return head->next;
        }
        while(i<j-1){
            curr = curr->next;
            i++;
        }
        curr->next = curr->next->next;
        return head;
    }
};
