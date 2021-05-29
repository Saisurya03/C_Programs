#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
int a;
fact(a);
}
void fact(int x)
{
  int n;
  scanf("%d",&n);
  x=x*fact(n-1);
  printf("%d",x);
}
