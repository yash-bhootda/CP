int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue<int> p;
        int n = r-l+1;
        
        for(int i = 0; i<n;i++)
        {
            p.push(arr[i]);
            if(p.size()>k)
            {
                p.pop();
            }
        }
        return p.top();
    }