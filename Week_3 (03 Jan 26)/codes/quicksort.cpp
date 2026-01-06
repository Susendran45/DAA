#include <stdio.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    while (i <= j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quickSort(int arr[], int low, int high)
{
    int p;
    if (low < high)
    {
        p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
int main()
{
    int arr[] = {157,110,147,122,111,149,151,141,123,112,117,133};
    int i;
    quickSort(arr, 0, 11);
    printf("Sorted Array \n");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

