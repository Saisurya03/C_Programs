#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i;
  char s[20];
  printf("Enter any string");
  gets(s);
  n=strlen(s);
  for(i=0; i<=n; i++)
  {
     s[i]=s[n];
  }
    for(i=0; i<=n; i++)
  {

    printf("%c",s[i]);
  }

}

