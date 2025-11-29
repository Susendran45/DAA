#include <stdio.h>
int sum_of_n_natural (int n)
{
int sum=0;
for(int i=1;i<=n;i++)
{
sum=sum+i;
}
return sum;
}
int main()
{
int s,k;
printf("Enter the n natural number to sum : ");
scanf("%d",&s);
k=sum_of_n_natural(s);
printf("Sum of %d natural numbers is : %d ",s,k);
return 0;
}

// Fixed part = 20 bytes
// Variable part = 0 bytes
// Total Space complexity = 20 bytes
// Space complexity = O(1)
/* Since the loop does not allocate new memory, and constant number of
variables is used and not changing based on input */
