#include<conio.h>
#include<stdio.h>

int n;

void MergeSort(int a[],int l,int h)
{
  int m;

   if(l<h)
   {
      m=(l+h)/2;
      MergeSort(a,l,m);
      MergeSort(a,m+1,h);
      Merge(a,l,m,m+1,h);
   }
}

void Merge(int a[],int i1,int j1,int i2,int j2)
{
  int k=0,i,j;
  int temp[15];
  i=i1;
  j=i2;

  while((i<=j1)&&(j<=j2))
  {
      if(a[i]<a[j])
      {
          temp[k]=a[i];
          i++;
          k++;
      }
      else
      {
             temp[k++]=a[j++];
      }
  }
  while(i<=j1)
  {
      temp[k++]=a[i++];
  }
  while(j<=j2)
  {
      temp[k++]=a[j++];
  }

  for(i=i1,j=0;i<=j2;i++,j++)
  {
      a[i]=temp[j];
  }

}

void main()
{
    int a[20],i;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("\nEnter %d elements:\n",n);

    for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }

    MergeSort(a,0,n-1);

    printf("Sorted elements are:\n");

         for(i=0; i<n; i++)
    {
       printf("%d\n",a[i]);
    }

}
