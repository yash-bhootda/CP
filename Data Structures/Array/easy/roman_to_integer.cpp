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
int romanToInt(string s)
{
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int sum = 0;
    int n =s.length();
    int i =0;
    while (n > i)
    {
        if(m[s[i]]<m[s[i+1]])
        {
            sum=sum+m[s[i+1]]-m[s[i]];
            i=i+2;
        }
        else
        {
            sum=sum+m[s[i]];
            i++;
        }
    }
    return sum;
}
int main()
{
    string s;
    cin>>s;
    int t;
    t=romanToInt(s);
    cout<<t;
    return 0;
}