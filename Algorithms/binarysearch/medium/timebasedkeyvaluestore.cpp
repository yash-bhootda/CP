class TimeMap {
public:
    unordered_map<string , vector<pair<int , string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp , value});
        
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())
        {
            return "";
        }
        if(timestamp<mp[key][0].first)
        {
            return "";
        }
        int l =0;
        int h = mp[key].size()-1;        
        while(l<=h)
        {
            int m = (l+h)/2;
            if(mp[key][m].first<=timestamp)
            {
                //cout<<mp[key][m].first<<endl;
                l=m+1;
            }
            else
            {
                //cout<<mp[key][m].first<<endl;
                h=m-1;
            }
        }
        if(h==-1)
        {
            return "";
        }
        return mp[key][h].second;

        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */