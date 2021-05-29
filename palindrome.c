#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,n,k=0;
  char s1[20],s2[20];
  printf("Enter upto which you want to find palindrome number\n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      s1[0]=i;
    strcpy(s2,s1);
    strrev(s1);
  /* if(strcmp(s1,s2)==0)
  {
     printf("%d is palindrome\n",s1[0]);
  }
  else
  {
      printf("%d is not a palindrome\n",s1[0]);
  }
*/
printf("%d\n",s1[0]);
  }


}
