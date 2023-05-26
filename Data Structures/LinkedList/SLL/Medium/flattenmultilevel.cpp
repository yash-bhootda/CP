//https://www.geeksforgeeks.org/flatten-a-linked-list-with-next-and-child-pointers/
void flattenList(Node *head) 
{ 
    /*Base case*/
    if (head == NULL) 
    return; 
  
    Node *tmp; 
  
    /* Find tail node of first level linked list */
    Node *tail = head; 
    while (tail->next != NULL) 
        tail = tail->next; 
  
    // One by one traverse through all nodes of first level 
    // linked list till we reach the tail node 
    Node *cur = head; 
    while (cur != tail) 
    { 
        // If current node has a child 
        if (cur->child) 
        { 
            // then append the child at the end of current list 
            tail->next = cur->child; 
  
            // and update the tail to new last node 
            tmp = cur->child; 
            while (tmp->next) 
                tmp = tmp->next; 
            tail = tmp; 
        } 
  
        // Change current node 
        cur = cur->next; 
    } 
} 