#include<stdio.h>
#include<conio.h>

void ShellSort(int a[],int l)
{

   int j,key,i;
   int g = l/2;

   for(g=l/2;g>0;g/=2)
   {
       for(i=g; i<l; i++)
      {
         key = a[i];

         for(j=i;j>=g&&a[j-g]>key; j-=g)
            a[j] = a[j-g];

          a[j] = key;
      }
   }


   printf("\n");

   for(i=0; i<l; i++)
   {
      printf("%d\n",a[i]);
   }
}


void main()
{
    int a[50];
    int l,i=0;
    printf("Enter size of array\n");
    scanf("%d",&l);

    printf("Enter elements of array\n");
    for (i=0; i<l; i++)
    {
        scanf("%d",&a[i]);
    }

    ShellSort(a,l);

}
