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
class ListNode
{
public:
    int data;
    ListNode *next;
};
void push(Node **head, int val)
{
    ListNode *new1 = new ListNode();
    new1->data = val;
    new1->next = *head;
    *head = new1;
}
ListNode *mergeTwoLists(ListNode *head1, ListNode *head2)
{
    if (!head1)
    {
        return head2;
    }
    if (!head2)
    {
        return head1;
    }

    if (head1->val < head2->val)
    {
        head1->next = mergeTwoLists(head1->next , head2);
        return head1;
    }
    else
    {
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;

    }
}
int main()
{

    return 0;
}