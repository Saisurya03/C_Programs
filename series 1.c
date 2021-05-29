#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  int sum=0;
  printf("Enter the number of the terms to be printed\n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    if(i!=n)
    {
      printf("%d+",i);
    }
    else
    {
      printf("%d=",i);
    }
    sum=sum+i;
  }
  printf("\nsum is equal to %d\n",sum);
}
