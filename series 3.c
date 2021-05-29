#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  float b,sum=0;
  printf("Enter the number of the terms to be printed\n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    if(i!=n)
    {
      printf("1/%d+",i);
    }
    else
    {
      printf("1/%d=",i);
    }
    b=(float)1/i;
    sum=b+sum;
  }
printf("%f",sum);
}
