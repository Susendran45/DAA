#include <stdio.h>
void selection_sort(int arr[],int n)
{
int min_index,temp;
for(int i=0;i<n-1;i++)
{
min_index=i;
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[min_index])
{
min_index=j;
}
}
if(min_index != i)
{
temp=arr[i];
arr[i]=arr[min_index];
arr[min_index]=temp;
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
scanf("%d",&arr[i]);
}
printf("Array before Selection sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
selection_sort(arr,n);
printf("\nArray after Selection sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}

// Fixed part = 8 bytes
// Variable part = 4*n bytes
// Total Space complexity = 8 + 4*n bytes
// Space complexity = O(n)
/* Since the variable part comes from arr[], 
which grows linearly with input size n */
// Time complexity = O(n^2)
/* The worst case comes from inner loop performs 
comparison and proportional to the square of the 
array size */
