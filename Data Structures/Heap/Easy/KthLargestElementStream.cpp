class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int> > p;
    int find;
    KthLargest(int k, vector<int>& v) {
        find=k;
        for(int i =0;i<v.size();i++)
        {
            p.push(v[i]);
            if(p.size()>k)
            {
                p.pop();
            }
        }
    }
    
    int add(int val) {
        p.push(val);

        while(p.size()>find)
        {
            p.pop();
        }
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */