#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& nums,int l , int h )
{
    int pos = l;
    int pivot = nums[h];
    for(int j=l;j<h;j++)
    {
        if(nums[j]<=pivot)
        {
            swap(nums[pos], nums[j]);
            pos++;
        }
    }
    swap(nums[pos] , nums[h]);
    return pos;
}
int quickselect(vector<int>& nums,int l , int h , int k)
{
    int pi = partition(nums , l , h);
    int idx=nums.size()-k;
    if(idx==pi)
    {
        return nums[idx];
    }
    else if(idx<pi)
    {
        return quickselect(nums , l , pi-1 , k);
    }
    else
    {
        return quickselect(nums , pi+1 , h , k);
    }
}
int findKthLargest(vector<int>& nums, int k) {
    int l = 0;
    int h = nums.size()-1;
    return quickselect(nums , l , h , k);
}
int main()
{
    int n , t ;
    cin>>n;
    vector<int> a;
    while(n)
    {
        cin>>t;
        a.push_back(t);
        n--;
    }
    int k ;
    cin>>k;
    cout<<findKthLargest(a , k);

}