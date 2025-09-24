#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct mytype
{
   int a;
   float b;
};
int main()
{
mytype m1,*p;
//clrscr();
p=&m1;
printf("\n&m1=%u,p=%u\n",&m1,p);
printf("\n&m1.a=%u,&p=%u\n",&m1.a,&p);
cout<<"\nsizeof(m1)="<<sizeof(m1);
cout<<"\nsizeof(p)="<<sizeof(p);
cout<<"\nEnter m1.a and m1.b\n";

cin>>p->a>>p->b;

cout<<" \nm1.a="<<p->a<<"\tm1.b="<<p->b;

getch();


}
