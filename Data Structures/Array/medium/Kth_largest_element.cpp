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
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
    // // set<int, greater<int>> s(nums.begin(), nums.end());
    // // set<int, greater<int>>::iterator itr;
    // set<int> s(nums.begin() , nums.end());
    // // set<int>iterator itr = s.begin();
    // // // It will move forward the passed iterator by passed value
    // // std::advance(iter, k);
    // // for(int x :: s)
    // // {
    // //     cout<<x<<endl;
    // // }
    // // for (itr = s.begin(); itr != s.end(); itr++) {
    // //     cout << *itr << " ";
    // // }
    // // set<int>::iterator itr1 = s.begin();

    // // advance(itr1,s.size()- k ); // itr points to kth element in set
    // // int l = *itr;
    // auto it = s.begin();
    // for (int i = 0; i < s.size() ; i++)
    // {
    //     cout<<*it<<" ";
    //     it++;
        
    // }
    // int l = *it;

    // return l;
}
int main()
{
    int n;
    cin >> n;
    vi a;
    while (n > 0)
    {
        int k;
        cin >> k;
        a.pb(k);
        n--;
    }
    int k;
    cin >> k;
    cout << findKthLargest(a, k);
    return 0;
}