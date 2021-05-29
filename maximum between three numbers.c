#include<stdio.h>
#include<conio.h>
   void main()
{
    int a,b,c;
    printf("Please enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {

       if(a>c)
       {
          printf("a is maximum");
       }

       else
       {
          printf("b is maximum");

       }
    }
    else
    {
        if(b>c)
        {
           printf("b is maximum");
        }
        else
        {
           printf("c is maximum");
        }
    }
}
