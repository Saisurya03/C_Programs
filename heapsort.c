#include<stdio.h>
#include<conio.h>

void MaxHeapify(int a[],int i,int len)
{
   int l= 2*i;
   int r = 2*i +1;
   int lr = i;
   int temp = 0;

   if((l<len)&&(a[l]>=a[i]))
   {
     lr = l;
   }
   else
   {
      lr = i;
   }
   if((r<len)&&(a[r]>a[lr]))
   {
     lr = r;
   }
   if(lr != i)
   {
       temp = a[i];
       a[i] = a[lr];
       a[lr] = temp;
       MaxHeapify(a,lr,len);
   }
}

void BuildMaxHeap(int a[],int l)
{
    int i;

    for(i=l/2; i>=0; i--)
    {
        MaxHeapify(a,i,l);
    }
}

void HeapSort(int a[],int l)
{
    int i,temp = 0;
    BuildMaxHeap(a,l);
    int len = l;

    for(i=len-1; i>=0; i--)
    {
       temp = a[0];
       a[0] = a[i];
       a[i] = temp;
       len = len - 1;
       MaxHeapify(a,0,len);
    }
}

void main()
{
    int a[50];
    int i=0;
    int j = 0;
    int l;

    printf("Enter size of array\n");
    scanf("%d",&l);

    printf("Enter elements of array\n");
    for (i=0; i<l; i++)
    {
        scanf("%d",&a[i]);
    }

    HeapSort(a,l);

    printf(("\nSorted array:\n"));

      for (i=0; i<l; i++)
      {
        printf("%d\n",a[i]);
      }
}
