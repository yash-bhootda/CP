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
int maxArea(vector<int>& a) 
{
    int l=0;
    int r=a.size()-1;
    int most = 0;
    while(r>l)
    {
        int k = min (a[l] , a[r]);
        int maxc=abs(k*(r-l));
        most=max(maxc , most);
        if(a[r]>a[l])
        {
            l=l+1;
        }
        else
        {
            r=r-1;

        }

    }    
    return most;   
}
int main()
{
    int n ;
    cin>>n;
    vi arr;
    int t;
    fo(0,n)
    {
        cin>>t;
        arr.pb(t);

    }
    int k =maxArea(arr);
    cout<<k;

    return 0;
}