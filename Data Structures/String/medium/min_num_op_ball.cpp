#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; j < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void minOperations(string boxes)
{
    vector<int> ans;
    int n = boxes.length();
    int sum = 0;
    int rsum = 0;
    int lsum = 0;
    int rcount = 0;
    int lcount = 0;
    fo(0, n)
    {
        if (boxes[i] == '1')
        {
            rsum = rsum + i;
            rcount++;
        }
    }
    fo(0, n)
    {
        if (boxes[i] == '1')
        {
            rsum = rsum - i;
            rcount--;
        }
        sum = (rsum - (rcount * i) + (lcount * i) - lsum);
        ans.pb(sum);
        if (boxes[i] == '1')
        {
            lsum = lsum + i;
            lcount++;
        }
    }
    return ans;
}
// void minOperations(string boxes)
// {
//     vi a;
//     int n = boxes.length();
//     fo(0,n)
//     {
//         if(boxes[i]=='1')
//         {
//             a.pb(i);
//         }
//     }
//     fo(0,n)
//     {
//         int sum=0;
//         jfo(0,a.size())
//         {
//             sum=sum+abs(a[j]-i);
//         }
//         cout<<sum<<endl;
//     }
// }
int main()
{
    string s;
    cin >> s;
    minOperations(s);

    return 0;
}