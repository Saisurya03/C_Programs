#include<stdio.h>
#include<conio.h>
void swap();
void main()
{
   swap();
}
void swap()
{
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   printf("Numbers before swapping\n%d\n%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Numbers after swapping\n%d\n%d",a,b);
}
