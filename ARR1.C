#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5];
  int s=0,i;
   printf("Address Of Array\
   Elements\n");
  for(i=0;i<5;i++)
  printf("&a[%d]=%u\n"
  ,i,&a[i]);
  printf("Enter 5 ints\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  for(i=0;i<5;i++)
  s=s+a[i];
  printf("\n%d",s);
  getch();

}
