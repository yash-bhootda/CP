#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<long> a;
        for(int j=0;j<m;j++)
        {
            long x;
            cin>>x;
            a.push_back(x);
        }
        
        int count=0;
        
        for(int k=0;k<m;k++)
        {
            if(k<m-1)
            {
                if(a[k]!=a[k+1])
                {
                    count=count+2;

                }          
            }
            if(k<=m-3)
            {
                 if(a[k]!=a[k+1])
                {
                    if(a[k+1]!=a[k+2])
                    {
                        
                        count--;
                    }   

                }      
            }
        }
        cout<<count<<endl;


    }
}