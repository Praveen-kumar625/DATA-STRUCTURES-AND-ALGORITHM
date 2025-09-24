#include<stdio.h>
#include<conio.h>
int main()
{
  int a[2][2],b[2][2],
  c[2][2];
  int j,k,i,s;
  

  printf("Enter 8 ints\n");

  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
  scanf("%d",&a[i][j]);
  scanf("%d",&b[i][j]);
  }
  }

   for(i=0;i<2;i++)
   {
   printf("\n");
   for(j=0;j<2;j++)
   {
  printf("\ta[%d][%d]=%d"
  ,i,j,a[i][j]);

   }
   }


   printf("\n\n");

   for(i=0;i<2;i++)
   {
   printf("\n");
   for(j=0;j<2;j++)
   {
  printf("\tb[%d][%d]=%d"
  ,i,j,b[i][j]);

   }
   }


   for(i=0;i<2;i++)
   { for(j=0;j<2;j++)    {
     s=0;
   for(k=0;k<2;k++)   {
 printf("\na[%d][%d]*\
 b[%d][%d]",i,k,k,j);
s=s+(a[i][k])*(b[k][j]); }
   c[i][j]=s;
   }

   }
  getch();



  printf("\n\n");
 for(i=0;i<2;i++)
   {
   printf("\n");
   for(j=0;j<2;j++)
   {
  printf("\tc[%d][%d]=%d"
  ,i,j,c[i][j]);

   }
   }
  printf("\n\n");



  getch();

}
