#include<stdio.h>
#include<conio.h>

void SelectionSort (int a[],int l)
{
   int i=0,j=0;
   int min = 0;
   int temp = 0;

   for(i=0; i<l-1; i++)
   {
      min = i;
      for(j=i+1; j<l; j++)
      {
          if(a[j]<a[min])
          {
             min = j;
          }
       }
        temp = a[i];
          a[i] = a[min];
          a[min] = temp;
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

    SelectionSort(a,l);
}
