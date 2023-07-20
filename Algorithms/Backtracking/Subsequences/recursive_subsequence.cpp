

#include<bits/stdc++.h>
using namespace std;
void sub(int i , vector<int> &temp , vector<int> arr , int n )
{
    cout<<i<<endl;
    if(i>=n)
    {
        cout<<"printin array"<<" ";
        for(int j : temp)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index for the subsequnce
    temp.push_back(arr[i]);
    sub(i+1 , temp , arr , n);

    //removing the taken or picked index and choosing somethin else
    temp.pop_back();
    sub(i+1 , temp , arr , n);
    
}
int main()
{
    int n ;
    vector<int> arr={3,1,2};
    vector<int> temp;
    sub(0,temp,arr,arr.size());
}