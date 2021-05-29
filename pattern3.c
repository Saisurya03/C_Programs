#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k;
  for(i=1; i<=4; i++)
  {

      for(j=1; j<=i; j++)
      {
          k=1;

         printf("%d",k);

      }
      printf("\n");
  }
    for(i=4; i>=1; i--)
  {

      for(j=1; j<=i; j++)
      {
          k=i;

         printf("%d",k);

      }
      printf("\n");
  }
}
