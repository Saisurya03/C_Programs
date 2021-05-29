#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int *p;
   int i,n;
   printf("Enter number terms to be entered");
   p=(int *)malloc(n);
   for(i=0; i<n; i++)
   {
     scanf("%d",(p+i));
   }
   for(i=0; i<n; i++)
   {
     printf("%d",(p+i));
   }
}
