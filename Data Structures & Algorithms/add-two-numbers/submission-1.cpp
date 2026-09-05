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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rhead = new ListNode();
        ListNode* rcurr= rhead;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry=0;
        int sum=0;
        while(curr1 || curr2 || carry ==1 ){
            int val1 = 0,val2 = 0;
            if(curr1)val1 =curr1->val;
            if(curr2)val2 = curr2->val; 
            sum = val1 + val2 + carry;
            rcurr->val = sum % 10;
            if(sum > 9 ){
                carry = 1;
            }
            else{
                carry = 0;
            }
            if(curr1){curr1=curr1->next;}
            else {curr1 = nullptr;} 
            if(curr2){curr2=curr2->next;}
            else {curr2 = nullptr;}
            if(curr1 || curr2 || carry==1)
            {
            rcurr->next = new ListNode();
            rcurr = rcurr->next;
            }

        }
        return rhead;
    }
};
