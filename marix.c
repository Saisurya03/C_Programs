#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,a[3][3];
  for(i=0; i<5; i++)
  {
    for(j=0; j<3; j++)
     {
       printf("enter number %d%d",i,j);
       scanf("%d",&a[i][j]);
     }
  }
    for(i=0; i<5; i++)
  {
    for(j=0; j<3; j++)
     {
       printf("%d\t",&a[i][j]);
     }
  }
}
