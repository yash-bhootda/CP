#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll,ll>
#define ll long long int
#define fo(a,b) for(auto i=a;i<b;++i)
#define nfo(a,b) for(auto i=a;i<b;i--)
#define jfo(a,b) for(auto j=a;i<b;j++)
#define njfo(a,b) for(auto j=a;j<b;j--)
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int d)
    {
        this->data=d;
        this->next=NULL;

    }
};
void delete(Node** head , int pos)
{
    Node * temp = *head;
    Node* prev = NULL;
    if(pos=1)
    {
        *head = temp->next;
        free(temp);
    }
    pos=pos-1;
    while(pos)
    {
        prev=temp;
        temp=temp->next;
        pos--;
    }
    prev->next=temp->next;
    free(temp); 

}
void delete(Node** head , int data)
{
    Node * temp = *head;
    Node* prev = NULL;
    while(temp->data!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    // if(pos=1)
    // {
    //     *head = temp->next;
    //     free(temp);
    // }
    // pos=pos-1;
    // while(pos)
    // {
    //     prev=temp;
    //     temp=temp->next;
    //     pos--;
    // }
    prev->next=temp->next;
    free(temp); 

}
void push (Node** tail , int val)
{
    Node* temp = new Node();
    temp->data=val;
    (*tail)->next=temp;
    *tail=temp;


}
void print(Node *head)
{
    while(head)
    {
        cout<<head->data<<"=>";
        head=head->next;
    }
    cout<<"NULL";
}
int main()
{
    
    int a ;
    cin>>a;
    Node* head= new Node(a);
    Node* tail=head;
    int x ;
    int y;
    int flag=1;
    while(flag)
    {
        cin>>y;
        if(y==1)
        {
            cin>>x;
            push(&tail , x);
        }
        else
        {
            flag=0;
        }


    }
    print(head);

    return 0;
}