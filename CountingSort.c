#include <stdio.h>
#include <conio.h>

void CountingSort(int a[],int l)
{
    int b[l];
    int max,i,j;

    max=a[0];
   for(i=0; i<l; i++)
   {
     if(max<a[i])
     {
         max=a[i];
     }
   }

   max = max+1;
   int c[max];

   for ( i = 0; i < max; i++ ) {
      c[ i ] = 0;
         }

   for ( i = 0; i < l; i++ ) {
      b[ i ] = 0;
   }
      int k =0;

   for ( i = 0; i < l; i++ ) {

      k = a[ i ];
      c[ k ] = c[ k ] + 1;
   }

  int x = 0;
    for ( i = 1; i < max; i++ ) {
      x = i - 1;
      c[ i ] =  c[ i ] + c[ x ];
   }

   printf("\nElements of c\n");

   for (j = 0; j < max; j++ ) {
      printf("%d\n",c[j] );
   }

   int m = 0;
   for ( i = 0; i < l; i++) {

      k = a[ i ];
      c [ k ] = c[ k ] - 1;
      m = c[ k ];
      b[ m ] = k;

   }

   printf("\nElements of b\n");

   for (j = 0; j < l; j++ ) {
      printf("%d\n",b[j] );
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

    CountingSort(a,l);
}
