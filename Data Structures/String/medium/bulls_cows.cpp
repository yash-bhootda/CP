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
string getHint(string secret, string guess)
{
    int bulls, cows;
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    for (int i = 0; i < secret.size(); i++)
    {
        if (secret[i] == guess[i])
        {
            bulls++;
        }
        else
        {
            m1[secret[i]]++;
            m2[guess[i]]++;
        }
    }
    unordered_map<char , int> :: iterator it=m1.begin();
    while(it!=m1.end())
    {
        cows=cows+min(it->second , m2[it->first]);
        ++it;
    }
    string s = to_string(bulls) + 'A' + to_string(cows) + 'B';
    return s;
}
int main()
{
    string a , b;
    cin>>a;
    cin>>b;
    cout<<getHint(a , b);
    return 0;
}