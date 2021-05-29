#include<stdio.h>
#include<conio.h>

void InsertionSort (int a[],int l)
{
   int i=0,j=0;
   int key;
   int temp = 0;

   for(j=1; j<l; j++)
   {
      key = a[j];
      i = j-1;
       while((i>=0)&&(a[i]>key))
       {
           a[i+1] = a[i];
           i = i-1;
       }
       a[i+1] = key;
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

    InsertionSort(a,l);
}
