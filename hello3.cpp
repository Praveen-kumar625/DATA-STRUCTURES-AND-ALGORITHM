//Convert 2D to 1D Array (Row-Major)
#include<stdio.h>
int main(){
int A[3][3],B[9],i,j,k=0;
printf("Enter elements of Matrix A (3x3):\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
B[k++]=A[i][j];
printf("Converted 1D Array:\n");
for(i=0;i<9;i++)
printf("%d ",B[i]);
return 0;
}
