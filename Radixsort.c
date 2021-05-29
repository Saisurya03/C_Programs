#include <stdio.h>
#include <conio.h>

void CountingSort(int a[],int l,int p)
{
    int b[l];
    int max,i,j;

    max = (a[0] / p) % 10;

    int s;

   for (int i = 0; i < l; i++)
  {
        s = (a[i] / p) % 10;
       if (s > max)
      {max = a[i];}
  }

   max = max + 1;

   int c[max];

   for ( i = 0; i <max; i++ ) {
      c[ i ] = 0;
         }

   for ( i = 0; i < l; i++ ) {
      b[ i ] = 0;
   }
      int k =0;

   for ( i = 0; i < l; i++ ) {

      k  = ( a[ i ] / p ) % 10;
      c[ k ] = c[ k ] + 1;
   }

  int x = 0;
    for ( i = 1; i < max; i++ ) {
      x = i - 1;
      c[ i ] =  c[ i ] + c[ x ];
   }


   int m = 0;
   for (i=0; i<l; i++) {
      k = ( a[ i ] / p ) % 10;
      c [ k ] = c[ k ] - 1;
      m = c[ k ];
      b[ m ] = a[i];
   }


   for (j = 0; j < l; j++ ) {
      a[ j ] = b[ j ];
   }
}


void RadixSort(int a[],int l)
{
    int max,i,j;

    max=a[0];
   for(i=0; i<l; i++)
   {
     if(max<a[i])
     {
         max=a[i];
     }
   }

    for(j=1; max/j>0; j*=10)
    {
       CountingSort(a,l,j);
    }

    printf("\nElements of b\n");

   for (j = 0; j < l; j++ ) {
      printf("%d\n",a[j] );
    }
}
void main()
{
    int a[50];
    int i,j,l=0;

    printf("Enter array size\n");
    scanf("%d",&l);

    printf("Enter array elements\n");
    for(i=0; i<l; i++)
    {
       scanf("%d",&a[i]);
    }

    RadixSort(a,l);
}
