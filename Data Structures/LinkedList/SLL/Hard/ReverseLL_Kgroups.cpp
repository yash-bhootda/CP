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
void push(Node **head, int val)
{
    Node *new1 = new Node();
    new1->data = val;
    new1->next = *head;
    *head = new1;
}
Node *ReverseLL(Node **curr, int k)
{
    int count = 0;
    Node *yrb = *curr;
    Node *temp = NULL;
    Node *prev = NULL;
    while (yrb != NULL || count != k)
    {
        temp = yrb->next;
        yrb->next = prev;
        prev = yrb;
        yrb = temp;
        count++;
    }
    *curr = prev;
    return *curr;
}
void print(Node *node)
{
    // cout<<node->data;
    cout<<node->data;
    while (node->next != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << node->data;
}
int main()
{
    Node *head = NULL;
    push(&head, 8);
    push(&head, 9);
    push(&head, 0);
    push(&head, 10);
    // push(&head, 8, 19);
    // DeletionPos(&head, 1);
    Node *curr = head;
    Node *temp = head;
    Node *prev = NULL;
    int k;
    cin >> k;
    int l = 0;
    while (temp)
    {
        l++;
        
        temp = temp->next;
    }
    int count = 0;
    cout<<l;
    while (l)
    {
        count++;
        if (count == k)
        {
            curr->next = ReverseLL(&curr, k);
            count = 0;
        }
        curr=curr->next;
        l--;
    }
    print(head);
    return 0;
}