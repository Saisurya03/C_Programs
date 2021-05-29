#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a;
  printf("Enter number of days\n");
  scanf("%d",&n);
  a=n/30; n=n%30;
  printf("months=%d\ndays=%d",a,n);

}
