#include<stdio.h>
#include<conio.h>

int max(int x)
{
   if(x>=25)
   {
    //printf("%d\n",x);
      return 25;
   }
   else if(x>=10)
   {
      // printf("%d\n",x);
      return 10;
   }
   else if(x>=5)
   {
       //printf("%d\n",x);
      return 5;
   }
   else if(x>=1)
   {
       //printf("%d\n",x);
      return 1;
   }
}
int Make_Change(float f)
{
    int c=0;
    int a[5];
    a[0]=100;
    a[1]=25;
    a[2]=10;
    a[3]=5;
    a[4]=1;

    int x = f;

    c = c + x;
    int n = 0;
    f = f - x;
    f = f*100;
    x = ceil(f);
    printf("%d",x);

    while(x>0)
    {
       n = max(x);
       switch(n)
       {
          case 25: x = x - 25;
                   c = c + 1;
                   break;

          case 10: x = x - 10;
                   c = c + 1;
                   break;

          case 5: x = x - 5;
                   c = c + 1;
                   break;

          case 1: x = x - 1;
                  c = c + 1;
                  break;
       }
    }
    return c;
}

void main()
{
   printf("Enter Currency\n");
   float f;
   scanf("%f",&f);
   int c = Make_Change(f);
   printf("\n coins = %d",c);
}
