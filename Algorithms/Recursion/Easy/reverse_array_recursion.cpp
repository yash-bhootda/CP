//swap of n numbers

#include<bits/stdc++.h>
using namespace std;
void rev(int l,int r , vector<int> arr)
{
    if(l>=r)
    {
        return;
    }
    swap(arr[l] , arr[r]);
    l++;
    r--;
    return rev(l,r,arr);
}
int main()
{
    int n ;
    vector<int> arr={1,2,3,4,5};
    rev(0,arr.size()-1,arr);
}