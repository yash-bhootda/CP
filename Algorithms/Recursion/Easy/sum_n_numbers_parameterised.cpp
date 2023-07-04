//sum of n numbers

#include<bits/stdc++.h>
using namespace std;
void print(int i,int sum)
{
    if(i<=0)
    {
        cout<<sum<<endl;
        return;
    }
    sum=sum+i;
    return print(i-1,sum);
}
int main()
{
    int n ;
    cin>>n;
    print(n,0);
}