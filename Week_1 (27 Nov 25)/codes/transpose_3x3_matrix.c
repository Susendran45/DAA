#include <stdio.h>
int main()
{
int arr[3][3];
printf("Enter the matrix \n");
for(int i=0;i<3;i++)
{ for(int j=0;j<3;j++) {
scanf("%d",&arr[i][j]);
}}
printf("Original 3x3 matrix \n");
for(int i=0;i<3;i++)
{ for(int j=0;j<3;j++) {
printf("%d \t",arr[i][j]);
} printf("\n");}
printf("Transposed 3x3 matrix \n");
for(int i=0;i<3;i++)
{ for(int j=0;j<3;j++) {
printf("%d \t",arr[j][i]);
} printf("\n"); }
return 0;
}

// Fixed part = 44 bytes
// Variable part = 0 bytes
// Total Space complexity = 44 bytes
// Space complexity = O(1)
/* Since the arr is fixed size and loop does not allocate new memory, and constant
number of variables is used and not changing based on input, Suppose the matrix dimension
are not fixed and like arr[m][n] then the space complexity = O(m*n) because the variable
part = 4*m*n as m and n changes with the input size */ 
