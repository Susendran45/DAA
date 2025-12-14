#include <stdio.h>
void minheap(int arr[],int n,int i)
{
int smallest=i;
int left=2 * i + 1;
int right=2 * i + 2;
if(left<n && arr[left]<arr[smallest])
{
smallest=left;
}
if(right<n && arr[right]<arr[smallest])
{
smallest=right;
}
if(smallest!=i)
{
int temp=arr[i];
arr[i]=arr[smallest];
arr[smallest]=temp;
minheap(arr,n,smallest);
}
}
void heap_sort(int arr[],int n)
{
for(int i=n / 2 - 1;i>=0;i--)
{
minheap(arr,n,i);
}
for(int i=n-1;i>=0;i--)
{
int temp=arr[0];
arr[0]=arr[i];
arr[i]=temp;
minheap(arr,i,0);
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
printf("Array before Min Heap sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
heap_sort(arr,n);
printf("\nArray after Min Heap sort \n");
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
