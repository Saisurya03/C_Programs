#include<stdio.h>
#include<conio.h>
void main()
{
   int min,a[10],i,j,t,temp;
   printf("enter values");
   for(i=0; i<10; i++)
   {
     scanf("%d",&a[i]);
   }
   min=a[0];
 for(j=0; j<10; j++)
 {
 for(i=0; i<10; i++)
   {
     if(min>a[i])
     {
         min=a[i];
         t=i;
     }

   }
  temp=a[i];
  a[i]=min;
  min=temp;
 }
 printf("\n");
      for(i=0; i<10; i++)
   {
     printf("%d\n",a[i]);
   }
}
