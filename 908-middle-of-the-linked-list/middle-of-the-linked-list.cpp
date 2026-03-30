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
    
 int lengthofLL(ListNode* head) {
            ListNode* temp=head;
            int length=0;
            while(temp!=NULL) {
                length++;
                temp=temp->next;

        }
            return length;
        }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=lengthofLL(head);
        int mid=cnt/2;

        while(mid--) {
            temp=temp->next;
        }
        return temp;


        
    }
};