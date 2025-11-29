#include <stdio.h>
int main()
{
int n;
printf("Enter the n natural number to sum of square : ");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++)
{
sum=sum+(i*i);
}
printf("Sum of %d natural numbers is : %d ",n,sum);
return 0;
}

// Fixed part = 12 bytes
// Variable part = 0 bytes
// Total Space complexity = 12 bytes
// Space complexity = O(1)
/* Since the loop does not allocate new memory, and constant number of
variables is used and not changing based on input */
