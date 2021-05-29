#include<conio.h>
void main()
{
   int l,m,h,a[10],i,b,n;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   printf("Enter values\n");
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }

   h=n-1;
   l=0;
   m=(h+l)/2;
   printf("Enter element to be searched\n");
   scanf("%d",&b);
   while(l<=h)
   {
       m=(h+l)/2;

       if(b<a[m])
       {
           h=m-1;
       }
       else if(b>a[m])
       {
           l=m+1;
       }
       else
       {
           printf("Element found");
             break;
       }

   }
    m=(h+l)/2;
     if(l>h)
     {
         printf("Element not found");
     }
}

