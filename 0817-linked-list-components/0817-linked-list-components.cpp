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
        unordered_set<int> st;
        for (int x : nums) {
            st.insert(x);
        }
        int cnt = 0;
        ListNode* temp = head;

                while (temp!=nullptr) {
                    if(st.count(temp->val)){
                        if(temp->next==nullptr || !st.count(temp->next->val) )cnt++;
                    }
                    temp=temp->next;
                }

        return cnt;
    }
};