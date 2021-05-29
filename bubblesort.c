#include<stdio.h>
#include<conio.h>

void BubbleSort (int a[],int l)
{
   int i=0,j=0;
   int temp = 0;
   int swap = 0;

   for(i=0; i<l; i++)
   {
      for(j=0; j<l-i-1; j++)
      {
         swap = 0;
          if(a[j+1]<a[j])
          {
             temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp;

             swap = swap + 1;
          }
       }
       if(swap == 0)
       {
           break;
       }
   }
printf("\n",a[i]);
   for(i=0; i<l; i++)
   {
      printf("%d\n",a[i]);
   }
}

void main()
{
    int a[10];
    int l,i=0;
    printf("Enter size of array\n");
    scanf("%d",&l);

    printf("Enter elements of array\n");
    for (i=0; i<l; i++)
    {
        scanf("%d",&a[i]);
    }

    BubbleSort(a,l);
}
