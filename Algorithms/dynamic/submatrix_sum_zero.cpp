#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; j < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int findSum(int r1, int c1, int r2, int c2, int n, int m, vector<vector<int>> &p)
{
	int sum = p[r2][c2];
	if ((c1 - 1) >= 0)
	{
		sum -= p[r2][c1 - 1];
	}
	if ((r1 - 1) >= 0)
	{
		sum -= p[r1 - 1][c2];
	}
	if ((c1 - 1) >= 0 && (r1 - 1) >= 0)
	{
		sum += p[r1 - 1][c1 - 1];
	}
	return sum;
}
int largestSubmatrixWithSumZero(vector<vector<int>> &mat, int n, int m)
{
    vector<vector<int>> p(n, vector<int>(m, 0));
    
    fo(0, n)
    {
        
        jfo(0, m)
        {
            p[i][j] = mat[i][j];
			if ((j - 1) >= 0)
			{
				p[i][j] += p[i][j - 1];
			}
        }
    }
    
    jfo(0, m)
    {
        fo(0, n)
        {
            if ((i - 1) >= 0)
			{
				p[i][j] += p[i - 1][j];
			}
            
        }
    }
    // fo(0,n)
    // {
    //     jfo(0,m)
    //     {
    //         cout<<p[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int sum =0 ;
    int ans = 0;
	
	for (int r1 = 0; r1 < n; r1++)
	{
		for (int c1 = 0; c1 < m; c1++)
		{
			for (int r2 = r1; r2 < n; r2++)
			{
				for (int c2 = c1; c2 < m; c2++)
				{
					// Find the sum of submatrix(r1, c1, r2, c2).
					int sum = findSum(r1, c1, r2, c2, n, m, p);

					if (sum == 0)
					{
						int submatrixSize = (r2 - r1 + 1) * (c2 - c1 + 1);
						ans = max(ans, submatrixSize);
					}
				}
			}
		}
	}
	
	return ans;
}
    

int main()
{
    int t;
    cin >> t;

    for(int k =0;k<t;k++)
    {
        vector<vector<int>> v;
        int n;
        int m;
        cin >> n;
        cin >> m;
        
        fo(0,n)
        {

            vi p;
            jfo(0,m)
            {
                int x;
                cin >> x;
                p.pb(x);
            }
            v.pb(p);
        }
        

        int t = largestSubmatrixWithSumZero(v, n, m);
        cout<<t<<endl;
    }
    return 0;
}