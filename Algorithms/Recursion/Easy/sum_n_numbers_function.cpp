//sum of n numbers

#include<bits/stdc++.h>
using namespace std;
int print(int i)
{
    if(i<=0)
    {
        return 0;
    }
    return i+print(i-1);
}
int main()
{
    int n ;
    cin>>n;
    cout<<print(n);
}