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
long long findTheArrayConcVal(vector<int> &nums)
{
    long long ans=0;
    // cout<<"hi";
    while(nums.size()>1)
    {
        string t = "";
        
        t=t+to_string(nums[0]) + to_string(nums[nums.size()-1]);
        // cout<<t;
        int a= stoi(t);
        ans=ans+a;
        nums.erase(nums.begin());
        nums.erase(nums.end());
        cout<<nums.size()<<endl;
    }
    if(nums.size()==1)
    {
        string t = "";
        t=t+to_string(nums[0]);
        long long a= stoll(t);
        ans=ans+a;

    }
    return ans;

}
int main()
{
    int n , b;
    cin>>n;
    vi a;
    while(n)
    {
        cin>>b;
        // cout<<b;
        a.pb(b);
        n--;
    }

    // cout<<a[0];
    cout<<findTheArrayConcVal(a);
    return 0;
}