#include <stdio.h>
void maxheap(int arr[],int n,int i)
{
int largest=i;
int left=2 * i + 1;
int right=2 * i + 2;
if(left<n && arr[left]>arr[largest])
{
largest=left;
}
if(right<n && arr[right]>arr[largest])
{
largest=right;
}
if(largest!=i)
{
int temp=arr[i];
arr[i]=arr[largest];
arr[largest]=temp;
maxheap(arr,n,largest);
}
}
void heap_sort(int arr[],int n)
{
for(int i=n / 2 - 1;i>=0;i--)
{
maxheap(arr,n,i);
}
for(int i=n-1;i>=0;i--)
{
int temp=arr[0];
arr[0]=arr[i];
arr[i]=temp;
maxheap(arr,i,0);
}
}

int main()
{
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array before Max Heap sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
heap_sort(arr,n);
printf("\nArray after Max Heap sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}

// Space complexity = O(1)
/* Heap sort is in-place when implemented 
using arrays */
// Time complexity = O(n log n)
/* The worst case comes from where building a heap 
takes O(n) and each deletion or insertion takes 
O(log n) and is done n times */
