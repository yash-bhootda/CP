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
void Preorder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    Preorder(node->left);
    Preorder(node->right);
}
void Inorder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    Inorder(node->left);

    cout << node->data << " ";
    Inorder(node->right);
}
void Postorder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);
    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);
    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);

    return 0;
}