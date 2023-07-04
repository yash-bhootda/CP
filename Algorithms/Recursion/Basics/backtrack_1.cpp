//backtrack to print 1 to n
//so basically we are not gonna use ++

#include<bits/stdc++.h>
using namespace std;
void print(int i , int n)
{
    if(i<=0)
    {
        return;
    }
    print(i-1 , n);
    cout<<i<<endl;
}
int main()
{
    int n ;
    cin>>n;
    int i=n;
    print(i,n);
}