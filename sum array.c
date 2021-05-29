#include<stdio.h>
#include<conio.h>
void main()
{
  int i,sum,a[5];
  sum=0;
  for(i=0; i<5; i++)
  {
    printf("enter number%d\n",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0; i<3; i++)
  {
    sum=sum+a[i];
  }
   printf("sum=%d",sum);
}
