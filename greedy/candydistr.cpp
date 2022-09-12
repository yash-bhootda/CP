#define pb push_back
#define mk make_pair
#define vi vector<int>
#define srt(a) sort(a.begin() , a.end())
#define vl vector<long long int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
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
bool srtcc(const pair<int , int> a , const pair<int , int> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin>>n;
    vi a;
    fo(0,n)
    {
        int c;
        cin>>c;
        a.pb(c);
    }
    vpi b;
    fo(0,n)
    {
        b.pb(mk(i,a[i]));
    }
    
    sort(b.begin() , b.end() , srtcc);
    
    vi candies;
    fo(0,n)
    {
        // int ind=b[i].first;
        // cout<<ind<<" ";
        candies.pb(1);
    }
    
    // cout<<n;
    for(int j=0;j<n;j++)
    {
        
        int ind=b[j].first;
        
        if(ind>0)
        {
            if(a[ind] > a[ind-1])
            {
                candies[ind] = max(candies[ind] , candies[ind-1] + 1);
            }
        }
        if(ind<n-1)
        {
            if(a[ind] > a[ind+1])
            {
                candies[ind] = max(candies[ind] , candies[ind+1] + 1);
            }
        }

    }
    int sum=0;
    fo(0,n)
    {
        sum=sum+candies[i];
    }
    cout<<sum;
}


