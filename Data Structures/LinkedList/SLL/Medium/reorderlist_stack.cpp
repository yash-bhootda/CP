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
        int count=0 , t=0;
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
        stack<ListNode*> st;
        temp=head;
        ListNode* tp;
        while(temp)
        {
            t++;
            if(t==mid)
            {
                tp=temp;
            }
            if(t>mid)
            {
                st.push(temp);
            }
            temp=temp->next;
        }
        temp=tp;
        temp->next=NULL;
        temp=head;
        while(temp->next)
        {
            ListNode* t = temp->next;
            temp->next=st.top();
            temp=temp->next;
            temp->next=t;
            st.pop();
            temp=temp->next;
        }
        while(!st.empty())
        {
            cout<<st.top()->val;
            temp->next=st.top();
            temp=temp->next;
            st.pop();
        }
        
        temp->next=NULL;
        
    }
};