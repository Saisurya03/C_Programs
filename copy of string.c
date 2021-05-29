#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  char s1[20],s2[20];
  printf("\nEnter any string\n");
  gets(s1);
  for(i=0; i<20; i++)
  {
     s2[i]=s1[i];
  }
  printf("Copied string\n");
  printf("%s",s2);
}
