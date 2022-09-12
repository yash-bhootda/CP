#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 , s2;
    cout<<"Enter the string"<<endl;
    cin>>s1;
    cin>>s2;
    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());
    int n= s1.length();
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<"Not and anagram";
            break;
        }
    }
    cout<<"it is an anagram";
}