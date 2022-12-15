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
void removeKdigits(string s, int k)
{
    int n = s.size();
    // cout<<s[0];
    stack<int> st;
    fo(1, n)
    {
        
        st.push(s[0]);
        while (!st.empty() && s[st.top()] < s[i])
        {
            st.push(i);
        }
        if (s[st.top()] > s[i])
        {
            st.pop();
            st.push(i);
        }
    }

    vector<char> a;
    while (!st.empty())
    {
        cout << (s[st.top()]);
    }
}
int main()
{
    string s;
    int k;
    cin >> s;
    cin >> k;
    removeKdigits(s, k);
    return 0;
}