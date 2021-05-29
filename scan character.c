#include<stdio.h>
#include<conio.h>

int main()
{
 char str[20],ch;

 int i,f;
 printf("Enter String: ");
 gets(str);

 printf("\nEnter Character to Search from String: ");
 scanf("%c",&ch);

 for(i=0;str[i]!='\0';i++)
 {
  if(ch==str[i])
  {
   f=0;
   break;
  }
  else
   f=1;
 }
 if(f==0)
  printf("\n character is available");
 else
  printf("\n character is not available");
}
