#include <iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int st = 0;
    int pivot = arr[l];
    int k = h;
    for (int i = h; i > l; i--)
    {
        if (arr[i] > pivot)
        {
            swap(arr[i], arr[k]);
            k--;
        }
    }
    swap(arr[l], arr[k]);
    return k;
}
void quicksort(int arr[], int l, int h)
{
    if (l< h)
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
    int arr[] = {7, 6, 10, 5, 9, 2, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    printArray(arr, n);
}