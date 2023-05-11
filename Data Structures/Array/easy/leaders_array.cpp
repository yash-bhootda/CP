class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int count=0;
        int max=INT_MIN;
        for(int i =n-1;i>=0;i--)
        {
            if(a[i]>=max)
            {
                max=a[i];
                ans.push_back(max);
                count++;
            }
            
        }
        reverse(ans.begin() , ans.begin()+count);
        return ans;
        
    }
};
//https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab