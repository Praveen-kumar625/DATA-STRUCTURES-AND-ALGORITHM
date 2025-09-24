#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct mytype
{
   int a;
   float b;
};
int main()
{
mytype m1[3];
int i;
//clrscr();
for( i=0;i<3;i++)
printf("\n&m1[%d].a=%u\t&m1[%d].b=%u",i,
&m1[i].a,i,&m1[i].b);
cout<<"\nSize Of m1 ="<<sizeof(m1);
cout<<"\nEnter m1.a and m1.b\
three times\n";
for(i=0;i<3;i++)
cin>>m1[i].a>>m1[i].b;
for( i=0;i<3;i++)
cout<<" \nm1["<<i<<"].a="<<m1[i].a<<
"\tm1["<<i<<"].b="<<m1[i].b;

getch();


}
