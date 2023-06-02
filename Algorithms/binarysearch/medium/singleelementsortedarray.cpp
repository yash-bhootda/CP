class Solution
{
public:
    int bsearch(vector<int> nums, int l, int h)
    {
        int m = (l + h) / 2;
        if (l > h)
        {
            return -1;
        }
        if (m == 0 || m == h)
        {
            return nums[m];
        }
        if (nums[m] != nums[m - 1] && nums[m] != nums[m + 1])
        {
            return nums[m];
        }
        if (nums[m] == nums[m - 1] && m % 2 == 0)
        {
            return bsearch(nums, l, m - 1);
        }
        else if (nums[m] != nums[m - 1] && m % 2 == 1)
        {
            return bsearch(nums, l, m - 1);
        }
        else
        {
            return bsearch(nums, m + 1, h);
        }
    }
    int singleNonDuplicate(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return nums[0];
        }
        int l = 0;
        int r = nums.size() - 1;
        /*while(l<r)
        {
            int m = (l+r)/2;
            if(m%2==1)
            {
                m--;
            }
            if(nums[m]==nums[m+1])
            {
                l=m+2;
            }
            else
            {
                r=m;
            }

        }*/
        return bsearch(nums, l, r);
    }
};