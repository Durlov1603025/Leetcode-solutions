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
        ListNode* head_copy=head;
        while(head_copy!=NULL && head_copy->next!=NULL){
            if(head_copy->val == head_copy->next->val){
                ListNode* del=head_copy->next;
                head_copy->next = head_copy->next->next;
                delete(del);
            }
            else{
                head_copy = head_copy->next;
            }
        }
        return head;
    }
};