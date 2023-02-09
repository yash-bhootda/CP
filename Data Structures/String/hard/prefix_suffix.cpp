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
string longestPrefix(string s)
{
    int len=0;
    int n = s.length();
    int i =1;
    while(i<n)
    {
        if(s[i]==s[len])
        {
            i++;
            len++;
        }
        else
        {
            
        }
    }
}
int main()
{

    return 0;
}