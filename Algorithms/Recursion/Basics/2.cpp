//print linearly from 1 to n
//print name n times

#include<bits/stdc++.h>
using namespace std;
void print(int n, int i)
{
    if(i>=n)
    {
        return;
    }
    cout<<i<<endl;
    i++;
    print(n,i);
}
int main()
{
    int n ;
    cin>>n;
    print(n,1);
}