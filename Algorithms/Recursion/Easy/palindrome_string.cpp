//sum of n numbers

#include<bits/stdc++.h>
using namespace std;
bool pal(string s , int i )
{
    if(i>=s.size()/2)
    {
        return true;
    }
    
    if(s[i]==s[s.size()-1-i]);
    {
        return pal(s,i+1);
    }
    return false;
    
}
int main()
{
    int n ;
    string s="racecar";
    cout<<pal(s,0);
}