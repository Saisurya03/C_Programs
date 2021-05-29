#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  int a[3][3];
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
     {
       printf("enter number %d%d",i,j);
        scanf("%d",&a[i][j]);
     }
  }
  printf("printing numbers");
    for(i=0; i<3; i++)
  {
    printf("\n");
    for(j=0; j<3; j++)
     {
       printf("%d\t",a[i][j]);
     }
  }
}
