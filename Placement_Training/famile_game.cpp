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
int main()
{
    int n;
    cin>>n;
    map<int , int> m;
    string t;
    cin>>t;
    int k =0;
    while(n)
    {
        m[k]=k+1;
        n--;
        k++;
    }
    int j =0;
    for(int i =0;i<t.size();i++)
    {
        char c = t[i];
        if(j==m.size()-1)
        {
            j=0;
        }
        if(c=='x')
        {
            j++;
        }
        if(c=='y')
        {
            m.erase(i);
            j++;
        }
    }
    cout<<m[0];
    return 0;
}