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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* temp=NULL;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        ListNode* rev=NULL;
        while(curr)
        {
            ListNode* temp=new ListNode(curr->val);
            temp->next=rev;
            rev=temp;
            curr=curr->next;
        }
        while(head)
        {
            if(head->val!=rev->val)
            {
                return false;
            }
            head=head->next;
            rev=rev->next;
        }
        return true;
    }
};