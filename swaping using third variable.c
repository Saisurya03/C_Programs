#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   printf("Numbers before swapping\n%d\n%d\n",a,b);
   c=a;
   a=b;
   b=c;

   printf("Numbers after swapping\n%d\n%d",a,b);
}
