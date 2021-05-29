#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  int disp[3][5];
  disp[0][0]=' ';
  disp[0][1]=' ';
  disp[0][2]='*';
  disp[0][3]=' ';
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
  disp[0][0]=1;
     for(i=0; i<2; i++)
    {
      for(j=0;j<3;j++)
        {

         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
    }

}
