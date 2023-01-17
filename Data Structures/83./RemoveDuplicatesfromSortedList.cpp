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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp){
            ListNode* t = temp;
            while(t && t->val == temp->val){
                t = t->next;
            }
            temp->next = t;
            temp = temp->next;
        }
        return head;
    }
};
