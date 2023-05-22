#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        this->next=NULL; 
    }
};
void InsertHead(Node* &head , int val)
{
    Node* temp=new Node(val);
    // temp->data=val;
    temp->next=head;
    head=temp;
}
void InsertTail(Node* &tail , int val)
{
    Node * temp = new Node(val);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}
void InsertN(Node*& head , int n , int val)
{
    if(n==1)
    {
        InsertHead(head , val);
        return;
    }
    Node * temp = head;
    while(n-1)
    {
        temp=temp->next;
        n--;
    }
    Node * t = new Node(val);
    t->next=temp->next;
    temp->next=t;
}
void print(Node* &head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* tail = head;
    InsertHead(head , 20);
    InsertHead(head , 30);
    InsertHead(head , 40);
    InsertTail(tail , 0);
    InsertTail(tail , -10);
    InsertTail(tail , -20);
    InsertN(head, 2 , 100);
    // cout<<head->next->data<<endl;
    // cout<<temp->data;
    print(head);
    return 0;
}