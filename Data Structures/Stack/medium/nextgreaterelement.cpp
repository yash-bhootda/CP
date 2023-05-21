#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n){
        stack<pair<long long , int>> st;
        st.push({a[0],0});
        vector<long long> ans(n,-1);
        for(int i =1;i<n;i++)
        {
            // cout<<st.top()<<endl;
            bool flag= true;
            while(!st.empty() && st.top().first<a[i])
            {
                ans[st.top().second]=a[i];
                st.pop();
            }
            st.push({a[i] , i});
            
        }
        // for(int i=n-1;i>=0;i--)
        // {
        //     while(!st.empty() && st.top()<=a[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty())
        //     {
        //         ans[i]=-1;
        //     }
        //     else
        //     {
        //         ans[i]=st.top();
        //     }
        //     st.push(a[i]);
        // }
        // return ans;
        // ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends