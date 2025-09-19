// Upper triangle and Lower triangle sum
#include<stdio.h>
int main(){
int A[3][3],i,j,upper=0,lower=0;
printf("Enter elements of Matrix A (3x3):\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++){
if(i<j)upper+=A[i][j];   // Upper triangle 
if(i>j)lower+=A[i][j];   // Lower triangle
} 
printf("Upper triangular sum: %d\n",upper);
printf("Lower triangular sum: %d\n",lower);
return 0;
}
