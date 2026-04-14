/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
// copy the next node value into current
        node->val=node->next->val;

        ListNode* temp=node->next;
        // then skip the next node
        node->next=node->next->next;
        // delete the next node
        delete(temp);

        
        
    }
    
};