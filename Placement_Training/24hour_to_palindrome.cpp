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
    string s;
    cin>>s;
    int a = s.find(":");
    int b = stoi(s.substr(0 , a));
    int c = stoi(s.substr(a+1 , s.size()));
    // cout<<b<<endl;
    // cout<<c;
    int count =0;
    while(b%10!=c/10 && c/10!=b%10 )
    {
        c++;
        if(c==60)
        {
            b=b+1;
            c=0;
        }
        if(a==24)
        {
            a=0;
        }2
        count++;

    }
    cout<<count;
    
    return 0;
}