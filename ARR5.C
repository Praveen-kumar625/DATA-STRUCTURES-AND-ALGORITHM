#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],b[5],c[10];
  int j,i;
    printf("Enter 10 ints\n");
  for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  scanf("%d",&b[i]);
  }
   for(i=0;i<5;i++)
   {
  printf("\na[%d]=%d",i,a[i]);
   }
   printf("\n\n");
    for(i=0;i<5;i++)
   {
  printf("\nb[%d]=%d",i,b[i]);
   }
  getch();

  for(i=0,j=0;i<5;i++,j+=2)
  {
  c[j]=a[i];
  c[j+1]=b[i];
  }
  printf("\n\n");

 for(i=0;i<10;i++)
  printf("\nc[%d]=%d",i,c[i]);
  getch();

}
