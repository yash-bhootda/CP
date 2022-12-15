#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 1;
    vector<int> a;
    int min = 100;
    while (flag)
    {
        int x;
        int t=0;
        cin >> x;
        if (x < 0)
        {
            flag = 0;
        }
        else
        {
            
            if(x>10 && x<100)
            {
                
                if(min>x)
                {
                    t=1;
                    min=x;
                }
            }
            if(x>100 || x<10)
            {
                if(min==100)
                {
                    a.push_back(x);
                    continue;
                }
                else
                {
                    a.push_back(min);
                    min=100;
                }
                
                a.push_back(x);
                
            }
            
        }
    }
    
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}
