#include <stdio.h>
void bubble_sort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
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
scanf("%d",&arr[i]);}
printf("Array before Bubble sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
bubble_sort(arr,n);
printf("\nArray after Bubble sort \n");
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
/* Since the variable part comes from arr[], which 
grows linearly with input size n */
// Time complexity = O(n^2)
/* The worst case comes from inner loop performs 
comparison and swaps */
