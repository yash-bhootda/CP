#define pb push_back
#define vi vector<int>
#define vs vector<string>
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
int evalRPN(vector<string> a) 
{
    stack <int> st;
    fo(0,a.size())
    {
        if(a[i]=="/" || a[i]=="*" || a[i]=="+" || a[i]=="-")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            ll z;
            if(a[i]=="/") 
            {
                z=y/x;
                st.push(z);
            }
            if(a[i]=="*") 
            {
                z=y*x;
                st.push(z);
            }
            if(a[i]=="+")
            {
                z=y+x;
                st.push(z);
            }
            if(a[i]=="-") 
            {
                z=y-x;
                st.push(z);
            }
        }
        else
        {
            int x=stoi(a[i]);
            st.push(x);
        }
    }
    cout<<st.top();      
    return 0;  
}
int main()
{
    int n;
    cin>>n;
    vs a;
    fo(0,n)
    {
        string x;
        cin>>x;
        a.pb(x);
    }
    evalRPN(a);

    return 0;
}