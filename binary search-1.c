#include<stdio.h>
#include<conio.h>

void main()
{
   int h,m,l,a[10],i,b;
   printf("Enter 10 values\n");

   for(i=0; i<10; i++)
   {
      scanf("%d",&a[i]);
   }

   l=0;
   h=9;


   printf("Enter element to be searched\n");
   scanf("%d",&b);

   m=(l+h)/2;
   while(l<=h)
   {
       if(a[m]<b)
       {
           l=m+1;
       }
       else if(b==a[m])
       {
           printf("\nSuccessful Search\n");
           break;
       }
       else
       {
           h=m-1;
       }
       m=(h+l)/2;
   }
   if(l>h)
   {
       printf("\nUnsuccessful search\n");
   }
}
