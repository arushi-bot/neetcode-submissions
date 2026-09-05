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
    void reorderList(ListNode* head) {
        vector<ListNode*> List,res;
        ListNode* curr = head;
        while(curr != NULL){
            List.push_back(curr);
            curr = curr->next;
        }
        int n = List.size()-1;
        int j = 0 ;
        while(j<n){
            List[j]->next = List[n];
            j++;
            if(j>=n)break;
            List[n]->next = List[j];
            n--;
        }
        List[n]->next = nullptr;
    }
};
