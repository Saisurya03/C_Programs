#include<stdio.h>
#include<conio.h>
 void main()
{
   int a,b,c,n;
   printf("for addition press 1\nfor subtraction press 2\nfor multiplication press 3\nfor division press 4\n");
   scanf("%d",&n);
   switch(n)
   {
       case 1: printf("enter numbers to be added");
               scanf("%d%d",&a,&b);
               c=a+b;
               printf("%d+%d=%d",a,b,c);
               break;
       case 2: printf("enter numbers to be subtracted");
               scanf("%d%d",&a,&b);
               c=a-b;
               printf("%d-%d=%d",a,b,c);
               break;
       case 3: printf("enter numbers to be multiplied");
               scanf("%d%d",&a,&b);
               c=a*b;
               printf("%d*%d=%d",a,b,c);
               break;
       case 4: printf("enter numbers to be divided");
               scanf("%d%d",&a,&b);
               c=a/b;
               printf("%d/%d=%d",a,b,c);
               break;
   }
}
