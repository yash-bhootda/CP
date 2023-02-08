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
string minRemoveToMakeValid(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            stk.push(i);
        }
        if (s[i] == ')')
        {
            if (!stk.empty() && stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    cout<<stk.size();
    for(int i =s.length()-1;i>=0;i++)
    {
        if(!stk.empty() && stk.top()==s[i])
        {
            s.erase(i , 1);
            stk.pop();
        }
    }
    
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << minRemoveToMakeValid(s);
    return 0;
}