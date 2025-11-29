#include <stdio.h>
int fibonacci_series (int n)
{
if(n==0) {
return 0; }
if(n==1) {
return 1; }
else {
return fibonacci_series (n-1) + fibonacci_series (n-2); }
}

int main()
{
int s,k;
printf("Enter the number of terms in fibonacci series : ");
scanf("%d",&s);
printf("Fibonacci series \n");
for(int i=0;i<s;i++) {
k=fibonacci_series(i);
printf("%d ",k); }
return 0;
}

// Fixed part = 12 bytes
// Variable part = 4*n bytes
// Total Space complexity = 12 + 4*n bytes
// Space complexity = O(n)
/* Since the n increases, the variable part 4*n gives the actual space
complexity and the function fibonacci_series is recursive. So, memory
increases with changes in input size */
