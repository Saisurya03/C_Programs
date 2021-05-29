#include<stdio.h>
#include<conio.h>
  void main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }

}
