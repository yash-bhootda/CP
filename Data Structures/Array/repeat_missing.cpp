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
vector<int> repeatedNumber(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    vi b;
    for (int i = 0; i < n; i++)
    {
        // if (A[i] != i+1)
        // {
        //     b.pb(A[i]);
        //     b.pb(i+1);
        // }
        cout<<A[i]<<endl;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;
    vi b;
    while(n>0)
    {
        int k ;
        cin>>k;
        
        b.pb(k);
        n--;
    }
    vi a;
    a= repeatedNumber(b);
    // cout<<a[0]<<" "<<a[1];
    return 0;
}