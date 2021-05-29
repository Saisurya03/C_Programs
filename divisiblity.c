#include<stdio.h>
#include<conio.h>

   void main()

{
    int a,b,n;
    printf("Please enter a number\n");
    scanf("%d%d",&a,&n);

    b=a%n;
    if(b==0)
    {
      printf("%d is divisible by %d",a,n);
    }
    else
    {
      printf("%d is not divisible by %d\n",a,n);
    }


    float d;
    d=a/n;
    d=(float)a/n;
    printf("Division of %d by %d is %f",a,n,d);

}
