#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    vector<long long int> a;
	    for(int j=0;j<10;j++)
	    {
	        long long int x;
	        cin>>x;
            a.push_back(x);      
	    }
        long long int m;
        cin>>m;
        for(int k=9;k>=0;k--)
        {
            if(m>=a[k] && m>0)
            {
                m=m-a[k];
            
            }
            else if(a[k]!=0)
            {
                cout<<k+1<<endl;
                break;
            }
        }
	}
	return 0;
}