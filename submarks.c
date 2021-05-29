#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[3];
  for(i=0; i<3; i++)
  {
    printf("enter marks of sub%d\n",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0; i<3; i++)
  {
    printf("%d\t",a[i]);
  }

}
