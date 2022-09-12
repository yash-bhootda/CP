#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    if(k>=n)
    {
        sort(p.begin() , p.end());
        for(int i=n-1;i>=0;i--)
        {
            cout<<p[i]<<" ";
        }
        k=0;
        
    }
    else if (k > n / 2)
    {
        for (int i = 0; i <=k+1; i++)
        {
            int t = max_element(p.begin() + i, p.end()) - p.begin();

            swap(p[i], p[t]);

            
        }
        for(int i=0;i<n;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<endl;
    }
    
    else
    {
        for (int i = 0; i < k; i++)
        {
            int t = max_element(p.begin() + i, p.end()) - p.begin();

            swap(p[i], p[t]);

            
        }
        for(int i=0;i<n;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<endl;
    }

    

    return 0;
}
