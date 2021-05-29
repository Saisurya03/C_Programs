#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
void main()
{
  int n;
  float a,b,c;
  printf("Enter 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division");
  scanf("%d",&n);
  switch(n)
   {
      case 1: printf("enter two numbers");
               add();
                break;

      case 2:  printf("enter two numbers");
               sub();
                break;

      case 3:  printf("enter two numbers");
               mul();
                break;

      case 4:  printf("enter two numbers");
               div();
                break;

      default: printf("Invalid entry");
                break;
   }
}
void add()
{
   float x,y,c;
   scanf("%f%f",&x,&y);
   c=x+y;
   printf("%f",c);
}
void sub()
{
   float x,y,c;
   scanf("%f%f",&x,&y);
   c=x-y;
   printf("%f",c);
}
void mul()
{
   float x,y,c;
   scanf("%f%f",&x,&y);
   c=x*y;
   printf("%f",c);
}
void div()
{
   float x,y,c;
   scanf("%f%f",&x,&y);
   c=x/y;
   printf("%f",c);

}
