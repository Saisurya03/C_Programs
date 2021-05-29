#include<stdio.h>
#include<conio.h>

int pal(int);

int main()
{
    int n,i,d,rev = 0, remainder;
    printf("Enter number up to which palindrome numbers are to found\n");
    scanf("%d",&d);
    for(i=10; i<d; i++)
    {
       n=pal(i);
       if(n==i)
       {
           printf("%d\n",i);
       }
    }

}

int pal(int m)
{
    int rev = 0, remainder;
      while (m != 0)
     {
        remainder = m % 10;
        rev = rev * 10 + remainder;
        m/= 10;
     }
     return rev;
}
