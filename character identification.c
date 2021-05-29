#include<stdio.h>
#include<conio.h>
  void main()
{
   char a;
   printf("Please enter any character\n");
   scanf("%c",&a);
   if(a>='A' && a<='Z')
   {
      printf("%c is a capital ",a);
   }
   else if(a>='a' && a<='z')
   {
      printf("%c is a small",a);
   }
   else if(a>='0' && a<='9')
   {
      printf("%c is a number",a);
   }
   else
   {
      printf("%c is a special character ",a);
   }
}
