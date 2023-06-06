vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root==NULL)
   {
       return ans;
   }
   
   queue<Node*> q;
   q.push(root);
   ans.push_back(root->data);
   q.push(NULL);
   while(!q.empty())
   {
       Node * temp = q.front();
       //ans.push_back(temp->data);
       q.pop();
       if(temp==NULL)
       {
           if(!q.empty() && q.front()!=NULL)
           {
               ans.push_back(q.front()->data);
               q.push(NULL);
           }
       }
       else
       {
           if(temp->left)
           {
               q.push(temp->left);
           }
           if(temp->right)
           {
               q.push(temp->right);
           }
       }
   }
   return ans;
}
