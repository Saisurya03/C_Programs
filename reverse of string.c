#include<stdio.h>
#include<conio.h>
void main()
{
  int i,count=0,a;
  char s[20],s1[20];
  printf("Enter any string\n");
  gets(s);
  i=0;
  while(s[count]!='\0')
  {
    count++;
  }
a=count-1;
for(i=0; i<count; i++)
{
    s1[i]=s[a];
    a--;
}
printf("%s",s1);
}
