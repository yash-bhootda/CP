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

struct Node
{
    int data;
    Node* left , *right;
};

Node* newNode (int key)
{
    Node* temp = new Node;
    node->data= key;
    node->left =NULL;
    node->right =NULL;
    return temp;
}

int add(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    return add(root->key + add(root->left) +add(root->right));
}
int main()
{

    return 0;
}