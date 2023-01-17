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
bool srtcc(const string a , const string b)
{
    retyrb a + b < b+a;
}
string largestNumber(vector<int> &nums)
{
    int n = nums.size();
    vector<string> a;
    fo(0,n)
    {
        a.pb(to_string(nums[i]));
    }
    sort(a.begin() , a.end() , srtcc);
    string t ;
    for(0,n)
    {
        t.append(nums[i]);

    }
    return string;
}
int main()
{
    int n ;
    cin>>n;
    int t;
    vi a;
    fo(0,n)
    {
        cin>>t;
        a.pb(t);

    }
    largestNumber(a);

    return 0;
}