class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        /*Node* curr = head;
        Node* prev=curr;
        unordered_map<int,int> mp;
        while(curr)
        {
            if(mp.find(curr->data)==mp.end())
            {
                mp[curr->data]++;
                prev=curr;
            }
            else
            {
                prev->next=curr->next;
                delete(curr);
            }
            curr=prev->next;
        }*/
        
        
        Node * temp = head;
        Node * curr= new Node(0);
        Node * ans=curr;
        unordered_map<int,int> mp;
        while(temp)
        {
            if(mp.find(temp->data)==mp.end())
            {
                curr->next=temp;
                curr=curr->next;
            }
            mp[temp->data]++;
            temp=temp->next;
        }
        curr->next=temp;
        return ans->next;
    }
};
