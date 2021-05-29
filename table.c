#include<stdio.h>
#include<conio.h>
 void main()
{
   int a,i,j,b,n;
   printf("Please enter a number to display it's table\n");
   scanf("%d",&a);
   printf("Enter number up to which you want to display the table\n");
   scanf("%d",&n);
   j=1;

   for(i=1; i<=n; i++)
   {

      b=a*j;
      printf("%d*%d=%d\n",a,j,b);
      j++;
   }
}
