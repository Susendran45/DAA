#include <stdio.h>
void insertion_sort(int arr[],int n)
{
for(int i=1;i<n;i++)
{
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
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
printf("Array before Insertion sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
insertion_sort(arr,n);
printf("\nArray after Insertion sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}

// Fixed part = 12 bytes
// Variable part = 4*n bytes
// Total Space complexity = 12 + 4*n bytes
// Space complexity = O(n)
/* Since the variable part comes from arr[], 
which grows linearly with input size n */
// Time complexity = O(n^2)
/* The worst case comes from inner loop performs
comparison the element and shifts of each element */
