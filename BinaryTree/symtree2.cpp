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
bool isSameTree(struct Node* p, struct Node* q) 
{
        
        if(p== NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->data!=q->data) return false;
    
        return isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
        
}
Node* sw(struct Node* root)
{
    if(root!=NULL)
    {
        swap(root->left , root->right);
        sw(root->left);
        sw(root->right);
    }
    return root;
}       
bool isSymmetric(struct Node *root)
{
    struct Node* left=root->left;   
    struct Node* right=root->right;
    return isSameTree(left , sw(right));   
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->right = new Node(4);
    root->left->left = new Node(3);
    root->right->right = new Node(3);
    root->right->left = new Node(4);

    
    cout<<isSymmetric(root);
    
    return 0;
}