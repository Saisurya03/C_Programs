#include<stdio.h>
#include<conio.h>
void factorial();
void main()
{
   printf("Enter number whose factorial you want to find\n");
   factorial();
}
void factorial()
{
  int n;
 scanf("%d",&n);
 int i,x=1;
 for(i=1; i<=n; i++)
 {
    x=x*i;
 }
 printf("Factorial of %d is %d",n,x);
}
