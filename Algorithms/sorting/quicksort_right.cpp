
#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot=arr[h];
    int i = l;
    for(int j = l;j<h;j++)
    {
        if(arr[j]<=pivot)
        {
            swap(arr[i] , arr[j]);
            i++;
        }
    }
    swap(arr[i] , arr[h]);
    return i;
}
void quicksort(int arr[], int l, int h)
{
    if (l<h)
    {
        int pi = partition(arr, l, h);
        quicksort(arr, pi + 1, h);
        quicksort(arr, l, pi - 1);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    printArray(arr, n);
}