#include<stdio.h>
#include<conio.h>


void main()
{
 printf("Enter number of fibbonnaci numbers to be found\n");
 int t;
 scanf("%d",&t);
 int f = fibo(t);
 printf("%d",f);
}

int fibo(int n)
{
    int x;
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        x = (fibo(n-1)+ fibo(n-2));
        return x;
    }
}
