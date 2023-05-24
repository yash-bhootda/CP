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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode();  // dummy node for the merged list
        ListNode* curr = merged;  // current node in the merged list
        
        while(list1 && list2)
        {
            if(list1->val>list2->val)
            {
                curr->next=list2;
                list2=list2->next;
            }
            else
            {
                curr->next=list1;
                list1=list1->next;
            }
            curr=curr->next;
        }
        while(list1)
        {
            curr->next=list1;
            list1=list1->next;
            curr=curr->next;
        }
        while(list2)
        {
            curr->next=list2;
            list2=list2->next;
            curr=curr->next;
        }
        return merged->next;  // return the actual head of the merged list
    }
};
