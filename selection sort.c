#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,j,min,temp;
  printf("Enter 10 values\n");
  for(i=0; i<10; i++)
   {
       scanf("%d",&a[i]);
   }
  for(i=0; i<9; i++)
  {
      min=i;
      for(j=i+1; j<10; j++)
      {
          if(a[j]<a[min])
          {
              min=j;
          }
      }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  printf("\nSorted elements are:\n");
  for(i=0; i<10; i++)
   {
       printf("%d\n",a[i]);
   }
}
