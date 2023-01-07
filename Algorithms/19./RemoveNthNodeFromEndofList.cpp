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
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp = head;
        if(count == 1){
            head = NULL;
            return head;
        }
        if(count == n){
            head = head->next;
            return head;
        }
        for(int i=0;i<count-n-1;i++){
            temp = temp->next;
        }
        ListNode*t = temp->next;
        if(temp->next){
            temp->next = temp->next->next;
        }else{
            temp->next = NULL;
        }
        return head;

    }
};
