#include<stdio.h>
#include<conio.h>


void main()
{
 printf("Enter number rings\n");
 int n;
 scanf("%d",&n);
 hanoi(n,'s','a','d');
}

void hanoi(int n,char s,char a, char d)
{
    if(n==1)
    {
        printf("Move %c to %c\n",s,d);
    }
    else
    {
        hanoi(n-1,s,a,d);
        printf("Move %c to %c\n",s,d);
        hanoi(n-1,a,d,s);
    }
}
