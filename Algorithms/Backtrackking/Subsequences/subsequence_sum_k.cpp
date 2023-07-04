

// sum of n numbers

#include <bits/stdc++.h>
using namespace std;
void backtrack(int i, vector<int> &temp, vector<int> &arr, int &sum, int n, int t)
{
    if (i >= n)
    {
        if (sum == t)
        {
            for(auto i : temp) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    // take
    temp.push_back(arr[i]);
    sum += arr[i];
    backtrack(i + 1, temp, arr, sum, n, t);

    // remove
    temp.pop_back();
    sum -= arr[i];
    backtrack(i + 1, temp, arr, sum, n, t);
}

int main()
{
    vector<int> nums ={2,5,2,1,2};
    int n = nums.size();
    vector<int> temp;
    int sum =0;
    int target=5;
    int i =0;
    backtrack(i,temp,nums,sum,n,target);
}
