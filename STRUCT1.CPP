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
mytype m1,m2;
//clrscr();
printf("\n&m1.a=%u\t&m1.b=%u\t",
&m1.a,&m1.b);
printf("\n&m2.a=%u\t&m2.b=%u\t",
&m2.a,&m2.b);
cout<<"\nSize Of m1 ="<<sizeof(m1);
cout<<"\nSize Of m2 ="<<sizeof(m2);


cout<<"\nEnter m1.a and m1.b\n";
cin>>m1.a>>m1.b;
cout<<"\nEnter m2.a and m2.b\n";
cin>>m2.a>>m2.b;
cout<<" \nm1.a="<<m1.a
<<"\tm1.b="<<m1.b;
cout<<" \nm2.a="<<m2.a
<<"\tm2.b="<<m2.b;
getch();


}
