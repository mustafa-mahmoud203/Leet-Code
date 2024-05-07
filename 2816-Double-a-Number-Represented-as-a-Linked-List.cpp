class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> values;
        int val = 0;
        while (head != nullptr) {
            values.push(head->val);
            head = head->next;
        }

        while (!values.empty() || val != 0) {
            head = new ListNode(0, head);
            
            if (!values.empty()) {
                val += values.top() * 2;
                values.pop();
            }
            head->val = val % 10;
            val /= 10;
        }

        return head;
    }
};