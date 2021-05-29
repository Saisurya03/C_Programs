#include<stdio.h>
#include<conio.h>

   void main()
{
    float A,b,h;
    printf("Please enter base and height\n");
    scanf("%f%f",&b,&h);
    A=h*b*(0.5);
    printf("Area of the triangle is %f",A);
    getch();

}
