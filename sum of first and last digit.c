#include<stdio.h>
#include<conio.h>
void main()
{
  int last,sum,no;
  printf("Enter a number");
  scanf("%d",&no);
  last=no%10;
  while(no>10)
  {
     no=no/10;
  }
  sum=no+last;
  printf("%d",sum);
}
