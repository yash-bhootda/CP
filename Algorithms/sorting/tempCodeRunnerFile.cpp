void quicksort(int arr[], int l, int h)
{
    if (l< h)
    {
        int pi = partition(arr, l, h);
        quicksort(arr, pi + 1, h);
        quicksort(arr, l, pi - 1);
    }
}