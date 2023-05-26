class MyHashMap {
public:
    vector<pair<int,int>> v;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        remove(key);
        v.push_back({key,value});
    }
    
    int get(int key) {
        for(auto i : v)
        {
            if(i.first==key)
            {
                return i.second;
            }
        }
        return -1;
        
    }
    
    void remove(int key) {
        for(int i =0 ; i< v.size();i++)
        {
            if(v[i].first==key)
            {
                v.erase(v.begin()+i);
                return;
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */