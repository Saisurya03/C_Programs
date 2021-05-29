#include<stdio.h>
#include<conio.h>
void max();
void main()
{
   printf("Enter two numbers to find maximum between them\n");
   max();
}
void max()
{
 int x,y;
 scanf("%d%d",&x,&y);
   if(x>y)
   {
     printf("%d is greater than %d",x,y);
   }
   else if(x<y)
   {
     printf("%d is greater than %d",y,x);
   }
   else
   {
      printf("Both are equal");
   }
}
