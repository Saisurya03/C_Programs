#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a[3][3],c[3][3];
  printf("\nEnter elements of a 3*3 matrix\n\n");
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("Enter a[%d][%d]:\t",i,j);
          scanf("%d",&a[i][j]);
      }
  }
    for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          c[i][j]=a[j][i];
      }
  }
  printf("Original matrix:\n");
      for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("%d\t",a[i][j]);
      }
      printf("\n");
  }
    printf("\nTranspose of matrix:\n");
      for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("%d\t",c[i][j]);
      }
      printf("\n");
  }
}
