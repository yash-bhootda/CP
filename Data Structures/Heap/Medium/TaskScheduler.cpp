class Solution {
public:
    int leastInterval(vector<char>& t, int n) {
        map<char,int> mp;
        if(n==0)
        {
            return t.size();
        }
        for(int i =0;i<t.size();i++)
        {
            mp[t[i]]++;
        }

        priority_queue<int> pq;
        for(auto i : mp)
        {
            pq.push(i.second);
        }

        int time =0;

        while(!pq.empty())
        {
            vector<int> temp;
            int cycle = n+1;
            while(cycle && !pq.empty())
            {
                int curr = pq.top();
                pq.pop();
                if(curr>1)
                {
                    temp.push_back(curr-1);
                }
                time++;
                cycle--;
            }
            for(int i : temp)
            {
                pq.push(i);
            }
            if(pq.empty()) break;
            time=time+cycle;
        }
        return time;
    }
};