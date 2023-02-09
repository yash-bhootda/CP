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
int transform(string a, string b)
{
    map<char , int> m1;
    map<char , int> m2;
    int count =0;
    if(a.size()!=b.size())
    {
        return -1;
    }
    fo(0,a.size())
    {
        m1[a[i]]++;
        m2[b[i]]++;
    }
    if(m1!=m2)
    {
        return -1;
    }
    int j = a.size()-1;
    for(int i = a.size()-1;i>=0;i--)
    {
        cout<<a[i]<<" "<<b[j]<<endl;
        while( i>=0 && a[i]!=b[j] )
        {
            i--;
            count++;
        }
        j--;
        
        
    }
    return count;
    
}
int main()
{
    string a ;
    string b ;
    cin>>a;
    cin>>b;
    cout<<transform(a, b);
    return 0;
}