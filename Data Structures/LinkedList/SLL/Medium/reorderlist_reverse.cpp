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
    ListNode* reverse(ListNode* &head)
    {
        ListNode * temp= NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        if(count==1)
        {
            return;
        }
        int mid=count/2;
        int t=0;
        temp=head;
        ListNode* tp;
        while(temp)
        {
            t++;
            if(t==mid)
            {
                tp=temp;
                //temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        //cout<<tp->val;
        ListNode * right = tp->next;
        temp=tp;
        temp->next=NULL;
        temp=head;
        right=reverse(right);
        while(temp->next)
        {
            ListNode* t = temp->next;
            ListNode* p=right->next;
            temp->next=right;
            temp=temp->next;
            temp->next=t;
            temp=temp->next;
            right=p;
        }
        while(right)
        {
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
        
    }
};