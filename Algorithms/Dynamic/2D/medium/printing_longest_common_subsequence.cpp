#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.

    int lcs(int n, int m, string text1, string text2)
    {
        // your code here
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;
        for (int i = 0; i <= m; i++)
            dp[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];

                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        string ans = "";
        int i = n, j = m;
        while (i > 0 && j > 0)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                ans.push_back(text1[i - 1]);
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
        cout << ans << endl;
        return dp[n][m];

    }

};

//{ Driver Code Starts.
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m; // Take size of both the strings as input
        string s1, s2;
        cin >> s1 >> s2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}
