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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head->next;
        ListNode* temp=curr;

        while(temp!=NULL){
            int sum=0;
            while(temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            }

            curr->val=sum;
            temp=temp->next;

            curr->next=temp;
            curr=temp;

        }
        return head->next;
    }
};