#include <bits/stdc++.h> 
bool solve(int index , int tgt , vector<int>& arr , vector<vector<int>> &dp)
{
    if(tgt==0) return true;
    if(index==0)
    {
        if(tgt==arr[index]) return true;
        return false;
    }
    if(dp[index][tgt]!=-1) return dp[index][tgt];
    bool notake=solve(index-1 , tgt , arr , dp);
    bool take = false;
    if(arr[index]<=tgt) take=solve(index-1 , tgt-arr[index] , arr , dp);

    dp[index][tgt]=notake || take ;

    return dp[index][tgt];
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n, vector<int> (k+1,-1));
    return solve(n-1 , k , arr , dp);


}