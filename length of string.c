#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,count;
   char s[20];
   printf("\nEnter the String : ");
   gets(s);

   count=0;

   while (s[count] != '\0')
      count++;
   printf("%d",count);
}
