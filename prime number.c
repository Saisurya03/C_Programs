#include<stdio.h>
#include<conio.h>
int prime();
void main()
{
    prime();
}
int prime()
{
  int i,j,n,x;
  x=0;
  printf("Enter any term");
  scanf("%d",&n);
  for(i=2; i<=n/2; i++)
  {
     if(n%i==0)
     {
       x=1;
       break;
     }
  }
  if(n==1)
  {
    printf("Number is neither prime nor composite");

  }
  else
  {
      if(x==0)
      {
        return 1;

      }
      else
      {
        return 0;
      }
  }



}
