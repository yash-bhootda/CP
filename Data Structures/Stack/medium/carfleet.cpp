class Solution {
public:
    static bool mycompare(const pair<int,int> a , const pair<int,int> b)
    {
        return a.first>b.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i =0;i<position.size();i++)
        {
            v.push_back({position[i] , speed[i]});
        }
        sort(v.begin() , v.end() , mycompare);
        float t =-1;
        int count=0;
        for(int i =0;i<position.size();i++)
        {
            float time= float((target-v[i].first))/float(v[i].second);
            if(time>t)
            {
                count++;
                t=time;
            }
        }
        return count;
    }
};