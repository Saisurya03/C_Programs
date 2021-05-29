#include<stdio.h>
#include<conio.h>
  void main()
{
   char a;
   int bill,hour;
   printf("Please enter following character for\n");
   printf("t for truck\n");
   printf("c for car\n");
   printf("s for scooter\n");
   printf("k for cycle\n");
   scanf("%c",&a);
   printf("Please enter number of hour\n");
   scanf("%d",&hour);
   if(a=='t')
   {
      bill=hour*20;
      printf("Your bill is %d",bill);
   }
   else if(a=='c')
   {
      bill=hour*10;
      printf("Your bill is %d",bill);
   }
   else if(a=='s')
   {
      bill=hour*5;
      printf("Your bill is %d",bill);
   }
   else if(a=='k')
   {
      bill=0;
      printf("Your bill is %d",bill);
   }
   else
   {
      printf("Invalid entry");
   }
  getch();
}
