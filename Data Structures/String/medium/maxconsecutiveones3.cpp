class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0 , i =0;
        int countzero=0;
        int ans=INT_MIN;
        map<int,int> mp;
        /*while(i<nums.size())
        {
            mp[nums[i]]++;
            if(mp[0]>k)
            {
                mp[nums[l]]--;
                l++;
            }
            i++;
            ans=max(ans , i-l);
        }*/
        int counzero=0;
        while(i<nums.size())
        {
            if (nums[i]==0)
            {
                countzero++;
            }
            if(countzero>k)
            {
                if(nums[l]==0)
                {
                    countzero--;
                }
                l++;
            }
            i++;
            ans=max(ans , i-l);
        }
        return ans;
        
    }
};