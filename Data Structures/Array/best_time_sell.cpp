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
bool srtp(const pair<int , int > a , const pair<int , int> b)
{
    return a.first < b.first;
}
{
//     vector<pair<int, int>> profit;
//     int n=prices.size();
//     fo(0,n)
//     {
//         profit.pb({prices[i] , i});
//     }
//     sort(profit.begin() , profit.end() , srtp);
//     // cout<<profit[0].first<<" "<<profit[0].second;
//     if(profit[0].second==n-1)
//     {
//         profit.erase(profit.begin());
//     }
//     for(int i =profit.size()-1;i>0;i--)
//     {
//         if(profit[0].second < profit[i].second)
//         {
//             return profit[i].first-profit[0].first;
//         }
        
//     }

    int min = INT_MAX;
    int profit=0;
    for(int i =0;i<prices.size();i++)
    {
        if(min>prices[i])
        {
            min=prices[i];
        }
        if(prices[i]-min>profit)
        {
            profit=prices[i]-min;
        }

    }

    return profit;
}
int main()
{
    int n ;
    cin>>n;
    vi t;
    while (n>0)
    {
        int k ;
        cin>>k;
        t.pb(k);
        n--;

    }
    cout<<maxProfit(t);
    
    return 0;
}