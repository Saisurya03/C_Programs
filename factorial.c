#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a,b,x,n;
  printf("enter a value");
  scanf("%d",&n);
  a=1;
  i=1;
  while(i<=n)
   {
     x=a*i;
     a=x;

     i++;
  }
   printf("%d",x);
}
