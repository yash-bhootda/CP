class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }

};
class MyHashSet {
public:
    Node * head=NULL;
    MyHashSet() {
        
    }
    
    void add(int key) {
        Node* curr = head;
        while(curr)
        {
            if(curr->data==key)
            {
                return;
            }
            curr=curr->next;
        }
        Node* temp = new Node(key);
        temp->next=head;
        head=temp;

    }
    
    void remove(int key) {
        Node* prev=NULL;
        Node* curr=head;
        while(curr)
        {
            if(curr->data==key)
            {
                break;
            }
            prev=curr;
            curr=curr->next;
        }
        if(!curr)
        {
            return;
        }
        if(!prev)
        {
            head=head->next;
        }
        else
        {
            prev->next=curr->next;
        }
        
    }
    
    bool contains(int key) {
        Node *curr = head;
        while(curr) {
            if(curr -> data == key) return true;
            curr = curr -> next;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */