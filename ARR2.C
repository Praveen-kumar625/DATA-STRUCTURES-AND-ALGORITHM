#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5];
  int i;
  printf("Enter 5 ints\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  for(i=0;i<5;i++)
  printf("\n&a[%d]=%u\t\
  a[%d]=%d",i,&a[i],i,a[i]);
  getch();
  printf("\n\n");
  for(i=4;i>=0;i--)
  printf("\na[%d]=%d",i,a[i]);
  getch();

}
