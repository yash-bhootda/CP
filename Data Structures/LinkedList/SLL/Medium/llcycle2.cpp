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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        int count1 =0 , count2=0;
        unordered_map<ListNode* , ListNode*> mp;
        while(fast)
        {
            if(mp.find(fast->next)!=mp.end())
            {
                return mp[fast->next];
            }
            mp[fast]=fast;
            fast=fast->next;
        }
        return NULL;
    }
};