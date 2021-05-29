#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i,n;
  b=2;
  i=1;
  printf("enter number of terms to be printed");
  scanf("%d",&n);
  while(i<=n)
  {
    a=b*b;
    printf("%d,\t",a);
     b=b+1;
    i++;
  }

}
