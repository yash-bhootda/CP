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
int lengthOfLastWord(string s)
{
    int i = s.length()-1;
    int count =0;
    while(i>=0)
    {
        if(s[i]==' ' && count!=0)
        {
            break;
        }
        if(s[i]==' ' && count==0)
        {
            i--;
        }
        if(s[i]!=' ')
        {
            count++;
            i--;

        }
    }
    return count;

}
int main()
{
    string s;
    cin>>s;
    int a = lengthOfLastWord(s);
    cout<<a;
    return 0;
}