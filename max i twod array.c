#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][2],count,i,j;
 count=0;
for(i=0; i<5; i++)
{
  for(j=0; j<2; j++)
   {
    if(j==0)
    {
      printf("Enter weight of person-%d\n",i+1);
      scanf("%d",&a[i][j]);
    }
    else
    {
      printf("Enter height of person-%d\n",i+1);
      scanf("%d",&a[i][j]);
    }
    }
}
for(i=0; i<5; i++)
{
   if(a[i][0]<50 && a[i][1]>170)
   {
       count++;
   }
}

printf("%d persons have weight less than 50kg and height greater than 170cm",count);
}
