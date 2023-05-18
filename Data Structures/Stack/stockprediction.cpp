class StockSpanner {
public:
    stack<int> st;
    vector<int> v;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count =1;
        while(!st.empty() && price>=st.top())
        {
            count=count+v.back();
            v.pop_back();
            st.pop();

        }
        v.push_back(count);
        st.push(price);
        return count;
        /*if(st.empty())
        {
            st.push({price , 1});
            return 1;
        }
        if (st.top().first > price)
        {
            st.push({price,1});
            return 1;
        }
        else
        {
            int temp=0;
            while(st.size()>=1 && st.top().first<=price )
            {
                temp=temp+st.top().second;
                st.pop();
            }
            st.push({price , temp+1});
            return temp+1;
        }*/
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */