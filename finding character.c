#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,n,b, count=0;
   char c,s[20];
   printf("Enter any string\n");
   gets(s);
   n=strlen(s);
   printf("Enter character to be found");
   scanf("%c",&c);
   for(i=0; i<n; i++)
   {
    if(s[i]=='c')
    {
        count++;
    }
   }
   if(count==0)
   {
       printf("%c is not present",c);
   }
   else
   {
       printf("%c is present",c);
   }
}
