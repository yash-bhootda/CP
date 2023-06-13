/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
        {
            return "null";
        }
        string s = to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);

        return s;
     }

    TreeNode* treemake(queue<string> &q)
    {
        string s = q.front();
        q.pop();

        if(s=="null")
        {
            return NULL;
        }
        cout<<s<<endl;
        TreeNode* root = new TreeNode(stoi(s));
        root->left = treemake(q);
        root->right = treemake(q);

        return root;

    } 

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        queue<string> q;

        //string s ="";
        stringstream ss(data);
        string s;
        while (getline(ss, s, ',')) {
        q.push(s);
    }
        //return NULL;
        return treemake(q);
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));