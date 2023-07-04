int findKthLargest(vector<int>& nums, int k) {
        /*int l = 0;
        int h = nums.size()-1;
        return quickselect(nums , l , h , k);*/

        priority_queue<int , vector<int> , greater<int>> p;

        for(int i =0;i<nums.size();i++)
        {
            p.push(nums[i]);
            if(p.size()>k)
            {
                p.pop();
            }
        }
        
        return p.top();
    }