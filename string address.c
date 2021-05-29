#include<stdio.h>
#include<conio.h>
void main()
{
  char s[5];
  int i;
  gets(s);
  for(i=0; i<5; i++)
  {
     printf("%c\t\t%d",s[i],&s[i]);
     printf("\n");
  }
}
