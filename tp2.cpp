#include<iostream>
#include<vector>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int diffSum(int n,int m,vector<int> arr[])
{
    
    
}
int main()
{
    int a , n , m ;
    vector<int> arr;
    cin>>a;
    cin>>n;
    cin>>m;
}
