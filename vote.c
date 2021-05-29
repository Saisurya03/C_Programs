#include<stdio.h>
#include<conio.h>
  void main()
{
   int age;
   printf("Please enter your age\n");
   scanf("%d",&age);
   if(age>=18)
   {
      printf("You are eligible to vote");
   }
   else if(age<18)
   {
      printf("You are not eligible to vote");
   }

}
