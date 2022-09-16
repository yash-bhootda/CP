#define pb push_back
#define vi vector<int>
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
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

bool isValid(string s) 
{
    stack<char> st;
    int n = s.size();
 
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
            
        }
        else if (s[i] == '}' && st.size()!=0)
        {
            if (st.top() == '{')
            {
                st.pop();
                flag = 1;
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ']' && st.size()!=0)
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ')' && st.size()!=0)
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    if (st.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin >> s;
    bool t = isValid(s);
    cout << t;

    return 0;
}