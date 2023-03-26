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
    int n , count=0;
    cin>>n;
    vector<int> a;
    while(n)
    {
        int b;
        a.pb(b);
        n--;
    }
    for(int i =0;j=n-1;i<=j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else if(a[i] > a[j])
        {
            j--;
            a[j]=a[j]+a[j+1];
            count++;
        }
        else
        {
            i++;
            a[i+1]=a[i]+a[i+1];
            count++;

        }
    }
    return count;

    return 0;
}