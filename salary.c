#include<stdio.h>
#include<conio.h>
  void main()
{
   float salary,DA,HRA,TA,IT,GrossSalary,NetSalary;
   printf("please enter your salary\n\n");

   scanf("%f",&salary);

   DA=salary*0.1;
   HRA=salary*0.075;
   TA=300;
   IT=salary*0.125;

   GrossSalary=salary+DA+HRA+TA;
   NetSalary=salary+DA+HRA+TA-IT;

   printf("Your Gross salary is %f\n",GrossSalary);
   printf("your Net salary is %f",NetSalary);
}

