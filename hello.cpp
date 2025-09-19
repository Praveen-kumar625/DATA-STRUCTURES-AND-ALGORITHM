#include<stdio.h>
int main(){
int A[3][3],T[3][3],i,j;
printf("Enter elements of Matrix A (3x3):\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
T[j][i]=A[i][j]; // Transpose 
printf("Transpose Matrix T:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++)
printf("%d ",T[i][j]);
printf("\n");
}
return 0;
}
