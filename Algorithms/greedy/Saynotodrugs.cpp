#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, k, l;
        cin >> n;
        cin >> k;
        cin >> l;
        vector<long long int> a;
        int max=0;
        for (int j = 0; j < n; j++)
        {
            long long int x;
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j < n-1; j++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        if(k > 0)
        {
            a[n-1] += k * (l-1);
        }   
        
        if (a[n - 1]>max)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}