class Solution
{
public:
    TreeNode *mapping(TreeNode *root, map<TreeNode *, TreeNode *> &mp, int start)
    {
        TreeNode *res = NULL;
        mp[root] = NULL;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            if (temp->val == start)
            {
                res = temp;
            }
            if (temp->left)
            {
                mp[temp->left] = temp;
                q.push(temp->left);
            }

            if (temp->right)
            {
                mp[temp->right] = temp;
                q.push(temp->right);
            }
        }

        return res;
    }

    int infect(TreeNode *root, map<TreeNode *, TreeNode *> &mp)
    {
        queue<TreeNode *> q;
        int ans = 0;
        map<TreeNode *, bool> visit;
        visit[root] = true;
        q.push(root);

        while (!q.empty())
        {
            bool flag = false;
            int size = q.size();

            for (int i = 0; i < size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();

                if (temp->left && visit[temp->left] != true)
                {
                    q.push(temp->left);
                    visit[temp->left] = true;
                    flag = true;
                }

                if (temp->right && visit[temp->right] != true)
                {
                    q.push(temp->right);
                    visit[temp->right] = true;
                    flag = true;
                }

                if (mp[temp] && visit[mp[temp]] != true)
                {
                    q.push(mp[temp]);
                    visit[mp[temp]] = true;
                    flag = true;
                }
            }

            if (flag)
            {
                ans++;
            }
        }

        return ans;
    }
    int amountOfTime(TreeNode *root, int start)
    {

        map<TreeNode *, TreeNode *> mp;
        TreeNode *res = mapping(root, mp, start);
        return infect(res, mp);
    }
};