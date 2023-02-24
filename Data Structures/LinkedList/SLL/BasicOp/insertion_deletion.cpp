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
    Node *next;

};

void DeletionPos(Node **head, int pos)
{
    Node *temp;
    temp = *head;
    Node *prev;
    prev = NULL;
    cout<<pos<<endl;

    if(pos==1)
    {
        Node* temp=*head;
        *head=(*head)->next;
        free(temp);
    }
    else
    {
        Node* temp =*head;
        Node* prev=NULL;
        int count=1;
        while(count!=pos)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        prev->next=temp->next;
        free(temp);
        // cout<<temp->data<<endl;
        // cout<<prev->data<<endl;
    }

    
}
void DeletionKey(Node **head, int key)
{
    Node *temp;
    temp = *head;
    Node *prev;
    prev = *head;
    Node *a = *head;
    int pos=0;
    while(a->data!=key)
    {
        pos++;
        a=a->next;
    }
    for (int i = 0; i < pos; i++)
    {
        if (pos == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {

            if (pos - 1 == i && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)
                {
                    cout << "Not possible";
                    return;
                }
                temp = temp->next;
            }
        }
    }
}

void insertionBeg(Node **head, int val)
{
    Node *new1 = new Node();
    new1->data = val;
    new1->next = *head;
    *head = new1;
}

void insertionEnd(Node **head, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    if (*head == NULL)
    {
        *head = new1;
    }

    Node *last = *head;

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new1;
}

void insertionAtTail(Node **tail , int data)
{
    Node *temp = new Node();
    temp->data=data;
    temp->next=NULL;
    (*tail)->next=temp;
    *tail=temp;
}

void insertionAfterkey(Node **head, int key, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    Node *temp = *head;

    while (temp->data != key)
    {
        temp = temp->next;
    }
    new1->next = temp->next;
    temp->next = new1;
}

void insertionAfterN(Node **head, int n, int val)
{
    Node *new1 = new Node();

    new1->data = val;

    Node *temp = *head;

    while (n--)
    {
        temp = temp->next;
    }
    new1->next = temp->next;
    temp->next = new1;
}

void print(Node *node)
{
    // cout<<node->data;
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node();
    head=NULL;
    insertionBeg(&head, 29);
    insertionBeg(&head, 99);
    Node *tail =  head;
    // insertionBeg(&head, 9);
    // insertionBeg(&head, 0);
    // insertionEnd(&head, 10);
    // insertionAfterkey(&head, 8, 19);
    
    insertionAtTail(&tail , 7);
    insertionAtTail(&tail , 8);
    insertionAtTail(&tail , 9);
    // insertionAtTail(tail , 10);
    print(head);

    DeletionPos(&head, 2);

    print(head);

    return 0;
}