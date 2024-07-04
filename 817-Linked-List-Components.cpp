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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int ,int>m;
        int res=0;
        for(int i: nums)m[i]++;

        while(head !=NULL){
            if(m[head->val]){
                if(head->next){
                    if(!m[head->next->val])res++;
                }
                else res++;
            }
           
            head=head->next;
        }
        return res;
    }
};