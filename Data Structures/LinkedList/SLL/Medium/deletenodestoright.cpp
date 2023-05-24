//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node* &head)
    {
        Node* prev=NULL;
        Node*temp=NULL;
        while(head)
        {
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        head=prev;
        return head;
    }
    void compute(Node *head)
    {
        if(head->next->val>head->val)
        {
            head=head->next;
        }
        Node* temp=reverse(head);
        cout<<head->val<<endl;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        ob.compute(head);
        // print(result);
        cout<<endl;
    }
}

// } Driver Code Ends