class Solution {
public:
    ListNode* findmid(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left , ListNode* right)
    {
        ListNode* ans= new ListNode();
        ListNode* temp=ans;
        if(left==NULL)
        {
            return right;
        }
        if(right==NULL)
        {
            return left;
        }
        while(left && right)
        {
            if(left->val<right->val)
            {
                temp->next=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                right=right->next;
            }
            temp=temp->next;
        }
        while(left)
        {
            temp->next=left;
            left=left->next;
            temp=temp->next;
        }
        while(right)
        {
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
        return ans->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* mid=findmid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        left=sortList(left);
        right=sortList(right);
        ListNode* ans= merge(left , right);
        return ans;
        
    }
};