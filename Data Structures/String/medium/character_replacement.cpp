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
bool yrb(int start , int end , int count , int k )
{
    return end+1-start-count<=k;
}
int characterReplacement(string s, int k)
{
    unordered_map<char , int> m;
    fo(0,s.length())
    {
        m[s[i]]++;
    }
    unordered_map<char , int> :: iterator it;
    int lmax=0;
    for(it =m.begin();it!=m.end();it++)
    {
        char a = it->first;
        int start=0;
        int count=0;
        for(int i =0;i<s.length();i++)
        {
            if(a==s[i])
            {
                count++;

            }
            while(!yrb(start , i , count , k ))
            {
                if(a==s[start])
                {
                    count--;
                }
                start++;
            }
            int t = i+1-start;
            lmax=max(lmax , t);

            
        }

    }
    return lmax;
}
int main()
{
    string s;
    // cout << "Enter the string" << endl;
    getline(cin, s);
    int k ;
    cin>>k;
    int x;
    x = characterReplacement(s,k );
    cout << x;
    return 0;
}