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
void print(Node *node)
{
    // cout<<node->data;
    // cout<<"hll";
    cout << node->data;
    while (node->next != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << node->data;
}

Node *reversell(Node *head, int k)
{
    Node *curr = head;
    // Node *curr1 = head;
    Node *temp = NULL;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        temp = curr->next;
        curr->next = prev;
        prev=curr;
        curr = temp;
        count++;
    }
    if (temp != NULL)
    {
        head->next = reversell(temp, k);
    }

    return prev;
}
int main()
{
    Node *head = NULL;
    push(&head, 8);
    push(&head, 9);
    push(&head, 0);
    push(&head, 10);
    // cout<<head->data;
    Node* tp = reversell(head , 2);
    print(tp);

    return 0;
}