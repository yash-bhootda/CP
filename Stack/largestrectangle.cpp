#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll,ll>
#define ll long long int
#define fo(a,b) for(auto i=a;i<b;++i)
#define nfo(a,b) for(auto i=a;i<b;i--)
#define jfo(a,b) for(auto j=a;i<b;j++)
#define njfo(a,b) for(auto j=a;j<b;j--)
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& a)
{
    si st;
    int t=a[0];
    st.push(0);
    fo(1,n)
    {
        if(!st.empty() && a[i]<=a[st.top()])
        {
            t=t + min(a[i] , a[st.top()]);
            st.push(i);
        }
        while()

    }
}
int main()
{
    int n;
    cin>>n;
    vi a;
    fo(0.n)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    int t = largestRectangleArea(a);
    return 0;
}