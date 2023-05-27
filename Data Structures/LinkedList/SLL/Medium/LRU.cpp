class LRUCache {
public:
    class node
    {
        public:
        int key;
        int val;
        node* prev;
        node* next;
        node(int a , int b)
        {
            key=a;
            val=b;
        }
    };
    int cap;
    unordered_map<int , node*> mp;
    node* head = new node(-1 , -1);
    node* tail = new node(-1 , -1);

    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    void addnode(node* newnode)
    {
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    void deletenode(node *delnode)
    {
        node* temp =delnode->prev;
        node* temp1=delnode->next;
        temp->next=temp1;
        temp1->prev=temp;
        
    }

    int get(int key) { 
        if(mp.find(key)!=mp.end())
        {
            node* temp = mp[key];
            int a= temp->val;
            mp.erase(key);
            deletenode(temp);
            addnode(temp);
            mp[key]=head->next;
            return a;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            node* temp=mp[key];
            mp.erase(key);
            deletenode(temp);
        }
        if(mp.size()==cap)
        {
            node* temp = tail->prev;
            mp.erase(tail->prev->key);
            deletenode(temp);
        }
        node * temp = new node(key , value);
        addnode(temp);
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */