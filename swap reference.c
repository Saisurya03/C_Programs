#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int x,y;
    int *p,*q;
    p=&x;
    q=&y;
   swap(*p,*q);
}
void swap(int a, int b)
{
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   printf("Numbers before swapping\n%d\n%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Numbers after swapping\n%d\n%d",a,b);
}
