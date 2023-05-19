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
class Solution
{
public:
    vector<int> asteroidCollision(int N, vector<int> &s)
    {
        // code here
        stack<int> st;
        for (int i = 0; i < N; i++)
        {
            cout << s[i] << endl;
            if (st.size() == 0)
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] > 0)
                {
                    st.push(s[i]);
                }
                else
                {
                    if (st.top() < 0)
                    {
                        st.push(s[i]);
                    }
                    else
                    {
                        bool flag = true;
                        while (!st.empty() && st.top() > 0)
                        {
                            if (s[i] + st.top() < 0)
                            {
                                st.pop();
                            }
                            else if (s[i] + st.top() == 0)
                            {
                                st.pop();
                                flag = false;
                                continue;
                            }
                            else
                            {
                                flag = false;
                                continue;
                            }
                        }
                        st.push(s[i]);
                    }
                }
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++)
            cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        cout << "answer" << endl;
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
    return 0;
}