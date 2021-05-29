#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
 char k;
  for(i=1; i<=4; i++)
  {
      k='A';
      for(j=4; j>=i; j--)
      {
        printf("%c",k);
        k++;

      }
      printf("\n");
    }
}
