#include <stdio.h>
#include <conio.h>

struct Bucket
  {
    int a[max];
  }b[10];

void BucketSort(int a[],int l)
{
    float b[10];
    int max,i,j;

   for ( i = 0; i < 10; i++ ) {
      b[ i ] = 0;
   }
      int k =0;

}

void main()
{
    float a[50];
    int i,j,l=0;

    printf("Enter array size\n");
    scanf("%d",&l);

    printf("Enter array elements\n");
    for(i=0; i<l; i++)
    {
       scanf("%f",&a[i]);
    }

    BucketSort(a,l);
}
