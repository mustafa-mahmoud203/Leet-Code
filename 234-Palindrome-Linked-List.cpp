#define faster                 \\
  ios::sync_with_stdio(false); \\
  cin.tie(nullptr);            \\
  cout.tie(nullptr);

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
    bool check(ListNode*&head , ListNode* p){
         
         if(p==NULL)return true;
         bool x= check(head,p->next);
         if(p->val!=head->val){
            // head->next=NULL;
            return false;
         }
         head=head->next;
         return x;
    }
    bool isPalindrome(ListNode* head) {
        faster
        return check(head,head);

        // vector<int>v;
        // ListNode* temp=head;
        // while(temp){
        //     v.emplace_back(temp->val);
        //     temp=temp->next;
        // }
        // int l=0, r=v.size()-1;
        // while(l<r){
        //     if(v[l]!=v[r])return false;
        //     l++,r--;
        // }
        // return true;
        
        

        
    }
};