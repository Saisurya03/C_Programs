#include<stdio.h>
#include<conio.h>
  void main()
{
   float unit,bill;
   printf("Please enter the amount of unit used\n");
   scanf("%f",&unit);
   if(unit>=1 && unit<=150)
   {
      bill=unit*3;
      printf("Your bill is %f",bill);
   }
   else if(unit>=151 && unit<=350)
   {
      unit=unit-150;
      bill=unit*(3.75)+450;
      printf("Your bill is %f",bill);
   }
   else if(unit>=351 && unit<=450)
   {
      unit=unit-350;
      bill=unit*4+1200;
      printf("Your bill is %f",bill);
   }
   else if(unit>450)
   {
      unit=unit-450;
      bill=unit*5+1600;
      printf("Your bill is %f",bill);
   }
   else
   {
      printf("Invalid entry");
   }
}
