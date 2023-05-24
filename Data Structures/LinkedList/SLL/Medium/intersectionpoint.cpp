int getpoint(int d , Node* head1 , Node* head2)
{
    
    while(d)
    {
        d--;
        if(head1==NULL)
        {
            return -1;
        }
        head1=head1->next;
    }
    //cout<<head1->data<<endl;
    while(head1 && head2)
    {
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1=head1;
    Node* temp2=head2;
    int count1=0 , count2=0;
    while(head1)
    {
        count1++;
        head1=head1->next;
    }
    while(head2)
    {
        count2++;
        head2=head2->next;
        
    }
    //cout<<count1<<" "<<count2<<endl;
    if(count1>count2)
    {
        int d = count1-count2;
        return getpoint(d , temp1 , temp2);
    }
    else
    {
        int d = count2-count1;
        return getpoint(d , temp2 , temp1);
    }

}