#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,count;
   char s[20];
     count=1;
   printf("\nEnter the String : ");
   gets(s);
 for(i=0; i<strlen(s); i++)
   {
      if(s[i]==' ')
     { count++;}

   }
   printf("%d",count);
}
