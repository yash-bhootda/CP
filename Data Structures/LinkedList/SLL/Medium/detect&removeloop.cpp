class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node* , Node*> mp;
        Node * temp= head;
        while(temp)
        {
            if(mp.find(temp->next)!=mp.end())
            {
                temp->next=NULL;
                return;
            }
            mp[temp]=temp;
            temp=temp->next;
        }
    }
};