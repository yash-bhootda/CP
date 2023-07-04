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
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    //max heap
    priority_queue<int> p;

    p.push(8);
    p.push(10);
    p.push(0);

    cout<<p.top()<<endl;

    //min heap
    priority_queue<int , vector<int> , greater<int>> q;

    q.push(8);
    q.push(10);
    q.push(0);

    cout<<q.top()<<endl;

    return 0;
}