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
void reverse(Node ** head , Node * curr , Node*prev)
{
    if (curr == NULL)
    {
        *head = prev;
        return;
    }
    Node *temp = curr->next;
    reverse(head, temp, curr);
    curr->next = prev;

}
void reverse1(Node **head , Node* curr , Node * prev)
{
    if (curr == NULL)
    {
        *head = prev;
        return;
    }
    Node *temp = curr->next;
    reverse(head, temp, curr);
    curr->next = prev;
    
}
void print1(Node *node)
{
    // cout<<node->data;
    while (node->next != NULL)
    {
        cout << node->data <<"->";
        node = node->next;
    }
    cout<<node->data;

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
    Node *prev = NULL;
    reverse1(&head , curr , prev);
    print1(head);
    return 0;
}