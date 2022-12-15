#define pb push_back
#define vi vector<int>
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
    vi a;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fo(0,n) 
    {
        int x; 
        cin>>x; 
        a.pb(x);
    }
    fo(0,n) cout<<a[i];
    return 0;
}