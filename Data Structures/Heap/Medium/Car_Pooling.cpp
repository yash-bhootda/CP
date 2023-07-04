class compare{
public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.first>b.first) return true;
        if(a.first==b.first && a.second>b.second) return true;
        return false;
    }
};

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        // priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        // for(int i=0;i<trips.size();i++){
        //     pq.push(make_pair(trips[i][1],trips[i][0]));
        //     pq.push(make_pair(trips[i][2],-trips[i][0]));
        // }
        map<int,int> car;
        for(int i =0;i<trips.size();i++)
        {
            car[trips[i][1]] += trips[i][0];
            car[trips[i][2]] -= trips[i][0];

        }
        int ans = 0;
        // while(!pq.empty()){
        //     pair<int,int> a = pq.top();
        //     pq.pop();
        //     ans+=a.second;
        //     if(ans>capacity) return false;
        // }

        for(auto i : car)
        {
            ans=ans+i.second;
            if(ans>capacity) return false;
        }
        return true;
    }
};