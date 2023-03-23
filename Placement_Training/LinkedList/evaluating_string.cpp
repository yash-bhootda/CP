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
int precedence(char op)
{
    if(op=='+' || op=='-' )
    {
        return 1;
    }
    if(op=='*' || op=='/' )
    {
        return 5;
    }
    return 0;
}

int applyop(int a , int b , char c)
{
    switch(c)
    {
        case'+': return a+b;
        case'*': return a*b;
        case'-': return a-[b;
        case'+': return a+b;
    }
}
int main()
{
    char s;
    cout<<"Enter the value";
    cin>>s;
    cout<<s<<endl;
    int a = s-'0';
    cout<<a;

    return 0;
}