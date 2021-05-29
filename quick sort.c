#include<conio.h>
#include<stdio.h>

int pi;

void quickSort(int a[],int l,int h)
{

   if(l<h)
   {
      pi=partition(a,l,h);
      quickSort(a,l,pi-1);
      quickSort(a,pi+1,h);

   }
}

int partition(int a[],int low,int high)
{
  int i,j;
  int temp;

  pi=a[high];
  i=(low-1);

  for(j=low; j<=(high-1); j++)
  {
      if(a[j]<pi)
      {
          i++;
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
  }
          temp=a[i+1];
          a[i+1]=a[high];
          a[high]=temp;

    return (i+1);
}

void main()
{
    int a[20],i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("\nEnter %d elements:\n",n);

    for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }

    quickSort(a,0,n-1);

    printf("Sorted elements are:\n");

         for(i=0; i<n; i++)
    {
       printf("%d\n",a[i]);
    }

}
