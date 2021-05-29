#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,term,i=1;
  printf("Enter number of terms of Fibonacci series to be printed");
  scanf("%d",&term);
  a=1;
  b=1;
  printf("%d\n%d\n",a,b);
  while(i<=term-2)
  {
     c=a+b;
     printf("%d\n",c);
     a=b;
     b=c;
     i++;
  }
}
