#include<stdio.h>
#include<conio.h>
 void main()
{
int a,b,result;
printf("enter value of a");
scanf("%d",&a);
if(a>0)
   {
      printf("%d is positive",a);
   }
else if(a<0)
   {
      printf("%d is negative",a);
   }
else
   {
      printf("%d is zero",a);
   }
}
