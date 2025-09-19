//sum 
#include<stdio.h>
int main(){
int A[3][3],i,j,sum=0;
printf("Enter elements of Matrix A (3x3):\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
for(i=0;i<3;i++){
sum+=A[i][i];       // 1 diagonal
sum+=A[i][2-i];     // Second diagonal
}
sum-=A[1][1];        
printf("Sum of both diagonals: %d\n",sum);
return 0;
}
