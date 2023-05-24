long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long n= 1000000007;
  long long sum1=0 , sum2=0;
  while( l1 || l2)
  {
      if(l1)
      {
          sum1= ((sum1)*10)%n + l1->data;
          l1=l1->next;
      }
      if(l2)
      {
          sum2= ((sum2)*10)%n + l2->data;
          l2=l2->next;
      }
  }
  //cout<<sum1<<" "<<sum2<<endl;
  return ((sum1%n)*(sum2%n))%n;
}