#include<stdio.h>
#include<string.h>
#include<conio.h>
struct cricket
{
   char pname[20];
   char tname[20];
   int runs;
}p[3],t;
void main()
{
   int i,j;
   for(i=0; i<3; i++)
   {
     printf("Enter player name\n");
     scanf("%s",p[i].pname);
     printf("Enter team name\n");
     scanf("%s",p[i].tname);
     printf("Enter runs scored\n");
     scanf("%d",&p[i].runs);
   }
   for(i=0; i<3; i++)
   {
      for(j=i; j<3; j++)
      {
          if(strcmp(p[i].tname,p[j].tname)>0)
         {
           t=p[i];
           p[i]= p[j];
           p[j]= t;
         }
      }
   }
   printf("\nTeam name\t\tPlayer name\t\truns\n");
   for(i=0; i<3; i++)
   {
       printf("%s\t\t\t%s\t\t\t%d",p[i].tname,p[i].pname,p[i].runs);
       printf("\n");
   }
}
