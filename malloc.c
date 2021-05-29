#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
  int i,sum;
  int *p;
  sum=0;
  p=(int*)malloc(5*sizeof(int));
  printf("Enter five values\n");
  for(i=0; i<5; i++)
  {
     scanf("%d",p);
     sum=sum+*p;
     p++;
  }
  printf("sum=%d",sum);
  p=realloc(p,sizeof(int)*10);
  printf("%d",p);
  /*sum=0;
  printf("\nEnter ten values\n");
   for(i=0; i<10; i++)
  {
     scanf("%d",p);
     sum=sum+*p;
     p++;
  }
  printf("\nsum=%d",sum);*/
}
