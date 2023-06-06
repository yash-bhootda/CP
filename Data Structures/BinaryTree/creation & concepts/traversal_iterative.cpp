
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for the left of :" << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for the right of :" << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void bfs(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void inorder_iterative(node* root)
{
    stack<node*> st;
    vector<int> ans;
    while(root!=NULL || st.empty()==false)
    {
        node* temp= root;
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        //cout<<st.top()->data;
        ans.push_back(st.top()->data);
        root=st.top();
        st.pop();
        root=root->right;
    }
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void preorder_iterative(node* root)
{
    stack<node*> st;
    vector<int> ans;
    while(root || !st.empty())
    {
        while(root)
        {
            st.push(root);
            ans.push_back(root->data);
            root=root->left;
        }
        root=st.top();
        root=root->right;
        st.pop();

    }
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void postorder_iterative(node* root)
{
    stack<node*> st;
    vector<int> ans;
    while(root || !st.empty())
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        root=st.top();
        ans.push_back(root->data);
        
        st.pop();

    }
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root); 
    // 1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    cout << "Inorder" << endl;
    inorder(root);
    cout<<endl;
    cout << "Inorder Iterative" << endl;
    inorder_iterative(root);
    cout<<endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout<<endl;
    cout << "Preorder Iterative" << endl;
    preorder_iterative(root);
    cout<<endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout<<endl;
    cout << "Postorder Iterative" << endl;
    postorder_iterative(root);
    return 0;
}