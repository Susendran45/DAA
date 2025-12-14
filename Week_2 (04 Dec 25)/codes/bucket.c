#include <stdio.h>
#include <stdlib.h>
void bucket_sort(int arr[],int n)
{
int max=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
int *bucket=(int *)calloc(max+1,sizeof(int));
for(int i=0;i<n;i++)
{
bucket[arr[i]]++;
}
int index=0;
for(int i=0;i<=max;i++)
{
while(bucket[i]>0)
{
arr[index++]=i;
bucket[i]--;
}}
free(bucket);
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
printf("Array before Bucket sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
bucket_sort(arr,n);
printf("\nArray after Bucket sort \n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}

// Fixed part = 20 bytes
// Variable part = 4*n + 4(max+1) bytes
// Total Space complexity = 20 + 4*n + 4(max+1) bytes
// Space complexity = O(n+max)
/* Since the variable part comes from arr[] which grows 
linearly with input size n and space required to store the 
bucket array based on largest value in the input array */
// Time complexity = O(n+max)
/* The worst case comes from both the size of input array 
n and the size of bucket array max */
