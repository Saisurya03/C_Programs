#include<stdio.h>
#include<conio.h>
  void main()
{
    int i,sum=0;
    i=0;
    while (i<10)
    {
        i++;
        sum=sum+i;
        printf("%d\n",i);
          printf("Sum of first 10 natural number is %d",sum);
    }

    getch();
}
