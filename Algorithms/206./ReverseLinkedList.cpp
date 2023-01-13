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
    ListNode* reverseHead;
    ListNode* reverseList(ListNode* head) {
        reverse(head);
        return reverseHead;
    }
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL){
            reverseHead = head;
            return head;
        }
        ListNode* temp = reverse(head->next);
        temp->next = head;
        head->next = NULL;
        return head;
    }
};
