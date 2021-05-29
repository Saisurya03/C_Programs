#include<stdio.h>
#include<conio.h>
  void main()
{
   char a,b;
   printf("Enter character that is to be converted to small letter\n");
   scanf("%c",&a);
   b=a+32;
   printf("%c\n",b);
   char c,d;
   printf("Enter character that is to be converted to capital letter\n");
   scanf("%c",&d);
   c=d-32;
   printf("%c",c);

}
