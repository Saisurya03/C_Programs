#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,*p,*q;
   p=&a;
   q=&b;
   printf("enter any two number");
   scanf("%d%d",p,q);
   c=*p+*q;
   printf("%d",c);
}
