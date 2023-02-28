#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; i < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

void InsertionAtHead(Node **head, int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = *head;
    temp->prev = NULL;
    (*head)->prev = temp;
    *head = temp;
}

void InsertionAtTail(Node **tail, int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = *tail;
    (*tail)->next = temp;
    *tail = temp;
}

void InsertionAtMid(Node **head, int val, int pos)
{
    Node *new1 = new Node();
    Node *temp = *head;
    // cout<<pos<<endl;
    while (pos>1)
    {
        temp = temp->next;
        pos--;
    }
    new1->data=val;
    new1->next = temp->next;
    temp->next->prev = new1;
    new1->prev = temp;
    temp->next = new1;
}

void Deletion(Node** head , int pos)
{
    if(pos==1)
    {
        Node* temp = *head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        free(temp);
    }
    else
    {
        int cnt=1;
        Node* prev1=NULL;
        Node* curr=*head;

        while(cnt<pos)
        {
            prev1=curr;
            curr=curr->next;
            cnt++;
        }
        prev1->next=curr->next;
        curr->next->prev=prev1;
        free(curr);
    
    }
}

void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node();
    head->next = NULL;
    head->prev = NULL;
    head->data = 10;
    Node *tail = head;
    InsertionAtHead(&head, 90);
    InsertionAtHead(&head, 0);
    InsertionAtTail(&tail, 90);
    InsertionAtTail(&tail, 0);
    print(head);
    cout<<endl;
    InsertionAtMid(&head, 2, 2);
    print(head);
    Deletion(&head , 1);
    cout<<endl;
    print(head);
    return 0;
}