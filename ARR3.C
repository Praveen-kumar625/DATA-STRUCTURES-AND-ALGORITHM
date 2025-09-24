#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],b[5];
  int i;
  printf("Enter 5 ints\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  for(i=0;i<5;i++)
  printf("\na[%d]=%d",i,a[i]);
  for(i=0;i<5;i++)
  b[i]=a[4-i];
  printf("\n\n");
  getch();
  for(i=0;i<5;i++)
  printf("\nb[%d]=%d",i,b[i]);
  getch();

}
