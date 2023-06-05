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

void isSymmetric(struct Node *root)
{
    //     stack<int> l;
    //     vector<int> r;
    struct Node *currl = root->left;
    struct Node *currr = root->right;
    stack<struct Node *> l;
    l.push(currl);
    stack<struct Node *> r;
    r.push(currr);
    int flag=1;

    while(!l.empty())
    {
        struct Node *currl = l.top();
        struct Node *currr = r.top();
        if(currl == NULL && currr==NULL)
        {
            continue;
        }
        if(currl == NULL || currr==NULL)
        {
            cout<< "false";
            break;
        }
        int current1 = currl->data;
        int current2 = currr->data;
        if(current1!=current2)
        {
            cout<<current1<<endl;
            cout<<current2<<endl;
            cout<<"false";
            break;
        }
        l.push(currl->left);
        l.push(currl->right);
        
        r.push(currr->right);
        r.push(currr->left);
        l.pop();
        r.pop();
       
        
    }
    cout<<"true";
}

int main()
{
    struct Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->right->right = new Node(4);

    cout << "\nPostorder traversal of binary tree is \n";
    isSymmetric(root);
    
    return 0;
}