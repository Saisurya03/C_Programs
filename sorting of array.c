#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,a[5],temp;
   printf("Enter any 5 integers\n");
   for(i=0; i<5; i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0; i<5; i++)
   {
     for(j=i; j<5; j++)
     {
         if(a[i]>a[j])
         {
             temp=a[j];
             a[j]=a[i];
             a[i]=temp;
         }
     }
   }
   printf("\n\n");
      for(i=0; i<5; i++)
   {
      printf("%d\n",a[i]);
   }

}
