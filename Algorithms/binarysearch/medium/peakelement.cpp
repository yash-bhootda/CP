
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l =0;
        int h = nums.size()-1;
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums[0]>nums[1])
        {
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2])
        {
            return nums.size()-1;
        }
        while(l<=h)
        {
            int m = (l+h)/2;
            if(m>0 && m<nums.size()-1 && nums[m]>nums[m-1] && nums[m]>nums[m+1])
            {
                return m;
            }
            else if(nums[m]>nums[m+1])
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
            
        }
        return 0;
        
    }
};