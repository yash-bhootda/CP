//print name n times

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n<=0)
    {
        return;
    }
    cout<<"yash"<<endl;
    n=n-1;
    print(n);
}
int main()
{
    int n ;
    cin>>n;
    print(n);
}