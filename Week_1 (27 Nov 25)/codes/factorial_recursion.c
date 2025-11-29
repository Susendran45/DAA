#include <stdio.h>
int factorial_of_number (int n)
{
if(n==0)
{
return 1;
}
else
{
return n * factorial_of_number (n-1);
}
}

int main()
{
int s,k;
printf("Enter the number to find the factorial : ");
scanf("%d",&s);
k=factorial_of_number(s);
printf("Factorial of number %d is : %d ",s,k);
return 0;
}

// Fixed part = 8 bytes
// Variable part = 4*n bytes
// Total Space complexity = 8 + 4*n bytes
// Space complexity = O(n)
/* Since the n increases, the variable part 4*n gives the actual space
complexity and the function factorial_of_number is recursive. So, memory
increases with changes in input size */
