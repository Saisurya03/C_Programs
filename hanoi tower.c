#include<stdio.h>
#include<conio.h>

void toh(int,char,char,char);
void main()
{
   int n;
   printf("Enter number of rings in hanoi tower:\n");
   scanf("%d",&n);
   toh(n,'source','auxillary','destination');
}
void toh(int n,char from,char aux,char to)
{
    if(n==1)
    {
        printf("Move disc no.%d from %s to %s\n",n,from,to);
    }
    else
    {
        toh(n-1,from,to,aux);
        printf("Move disc no.%d from %s to %s\n",n,from,to);
        toh(n-1,aux,from,to);
    }
}
