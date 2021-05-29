#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,b,count;
   char s1[20],s2[20];
   printf("\nEnter the Strings to be compared : ");
   gets(s1);
   gets(s2);
   count=0;
   for(i=0; i<20; i++)
   {
       while(s1[i]==s2[i]&&s1[i]!='\0')
   {
    if(s1[i]!=s2[i])
    {
       b=1;
       break;
    }
   }
   }
   if(b==1)
   {
     printf("Both strings are same");
   }
   else
   {
     printf("Both strings are not same");
   }
}
