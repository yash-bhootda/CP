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
string discountPrices(string s, int discount)
{
    string str ="";
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='$')
        {
            cout<<"hell";
            int j =i+1;
            str=str+s[i];
            string temp="";
            while(s[j]!=' ')
            {
                temp=temp+s[j];

            }
            float x = stof(temp);
            x=x*(100-discount);
            x=x/100;
            string t = to_string(x);
            str+=t;
        }
        str+=s[i];
    }
    return str;
}
int main()
{
    string s;
    getline(cin , s);
    int discount;
    cin>> discount;
    cout << discountPrices(s , discount);

    return 0;
}