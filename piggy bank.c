#include<stdio.h>
#include<conio.h>
   void main()

{
   int ten,five,two,one,total;
   printf("Enter number of ten,five,two and one rupee coins\n");
   scanf("%d%d%d%d",ten,five,two,one);
   total=(ten*10)+(five*5)+(two*2)+one;
   printf("Total amount is %d",total);
   getch();
}
