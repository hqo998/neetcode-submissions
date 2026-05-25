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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;

        

        while (l1 && l2) {
            int t = l1->val + l2->val;

            if (l1->next || l2->next) {
                dummy->next = new ListNode();
            }

            if (((float)t / 10.f) > 1) {
                dummy->val = dummy->val + (t % 10);
                dummy->next = new ListNode(1);

            } else {
                dummy->val = dummy->val + t;
                
            }

            dummy = dummy->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1) {
            int t = l1->val + dummy->val;

            if (l1->next) {
                dummy->next = new ListNode();
            }

            if (((float)t / 10.f) > 1) {

                dummy->val = dummy->val + (t % 10);
                dummy->next = new ListNode(1);

            } else {
                dummy->val = dummy->val + t;
            }
            
            dummy = dummy->next;
            l1 = l1->next;
        }

        return head;
    }
};
