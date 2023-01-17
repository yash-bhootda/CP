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
#include <map>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin , s);
    map<char , int> m;
    fo(0 , s.length())
    {
        m[s[i]]++;
    }
    map<char , int> :: iterator it;
    for(it = m.begin() ; it!=m.end() ; it++)
    {
        if(it->second>1)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }

    return 0;
}