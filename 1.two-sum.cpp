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
    vector<pair<int , int> > vp;
    vp.pb({1 , 2});    
    vp.pb({4 , 5}); 
    int count =1;   
    for(auto i : vp)
    {
        count++;
        if(i.first==1)
        {
            cout<<"heal"<<endl;
            cout<<count<<endl;
            vp.erase(vp.begin()+1);
        }
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}