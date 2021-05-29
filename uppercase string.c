#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i;
   char s[20];
   printf("Enter word which is to be converted to uppercase");
   gets(s);
   for(i=0; i<strlen(s); i++)
   {
      if(s[i]>='a'&&s[i]<='z')
      {
         s[i]=s[i]-32;
      }
   }
   printf("%s",s);
}
