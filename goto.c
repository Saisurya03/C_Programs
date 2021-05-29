#include<stdio.h>
#include<conio.h>
 void main()
 {
     int a,i,j,k;
     printf("Enter the number of terms to be printed");
     scanf("%d",&a);
     printf("1\n");
     j=2;
     for(i=1; i<a; i++)
     {
         j=j+i;
         printf("%d\n",j);

     }
 }
