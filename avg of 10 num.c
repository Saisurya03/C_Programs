#include<stdio.h>
#include<conio.h>
void main()
{
  int i,max;
  int a[10];
  printf("Enter number");
  for(i=0; i<10; i++)
  {
     scanf("%d",&a[i]);
     if(max<a[i])
       {
         max=a[i];
         printf("Max is %d",max);
       }
  }
}
