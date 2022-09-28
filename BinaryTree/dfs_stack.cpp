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

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void dfs(struct Node *node)
{
    stack<struct Node*> st;
    st.push(node);
    while(!st.empty())
    {
        struct Node *curr = st.top();
        int current = curr->data;
        cout<<current<<" ";
        st.pop();
        if(curr->left)
        {
            st.push(curr->left);
        }
        
        if(curr->right)
        {
            st.push(curr->right);
        }
        
    }
} 

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\n DFS of binary tree is \n";
    dfs(root);
    
    return 0;
}