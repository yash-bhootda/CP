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
string longestCommonPrefix(vector<string> &s)
{
    sort(s.begin() , s.end());
    string t =s[0];
    for(int i =1;i<s.size();i++)
    {
        
        for(int j=0;j<t.length();j++)
        {
            // cout<<s[i]<<endl;
            
            if(t[j]!=s[i][j])
            {
                cout<<s[i][j]<<endl;
                t.erase(t.begin()+j , t.end());
                break;
            }
        }
    }
    return t;


}
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    string t;
    fo(0, n)
    {
        cin >> t;
        s.pb(t);
    }
    string p;
    p=longestCommonPrefix(s);
    cout<<p;

    return 0;
}
