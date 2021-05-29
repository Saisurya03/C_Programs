#include<stdio.h>
#include<conio.h>
void main()
{
   int max,a[10],i;
   printf("enter values");
   for(i=0; i<10; i++)
   {
     scanf("%d",&a[i]);
   }
   max=a[0];
   for(i=0; i<10; i++)
   {
     if(max<a[i])
     {
         max=a[i];
     }
   }
   printf("Maximum = %d",max);
}
