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

vector<int> nextGreaterElements(vector<int> &a)
{
    stack<int> st;
    int n = a.size();
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[i] > a[st.top()])
        {
            b[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    return b;
}
int main()
{
    vi x;
    vi z;
    int n;
    cin>>n;
    fo(0,n)
    {
        int y;
        cin>>y;
        x.pb(y);
    }
    z=nextGreaterElements(x);
    fo(0,n)
    {
        cout<<z[i]<<endl;
    }
    return 0;

}