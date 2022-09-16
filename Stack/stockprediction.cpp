class StockSpanner {
public:
    vi x;
    si st;
    int i=-1;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        i++;
        int k=i-1;
        while(!st.empty() && price>=st.top())
        {
            count=count+ x[k];
            k=k-x[k];
            st.pop();
        }
        
        x.pb(count);
        st.push(price);
        return x[i];
        
        
        
        
    }
};