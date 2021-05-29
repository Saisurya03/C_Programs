#include<stdio.h>
#include<conio.h>
int min;
int max;
int j=0;
void Min_Max(int a[],int p, int r)
{
    int i =0;
    printf("\np = %d",p);
    printf("\tr = %d",r);

    printf("\n");

    for(i=p; i<=r; i++)
    {
        printf("%d\n",a[i]);
    }
    int q,max1,min1;
    if(p==r)
    {
           min = max = a[p];
    }
    else
    {
        if(p==r-1)
        {
                if(a[p]<a[r])
                {
                min = a[p];
                max = a[r];
                }

                else
                {
                min = a[r];
                max = a[p];
                }
        }
        else
        {
                q = (p + r)/2;
                Min_Max(a , p, q);

                printf("left\n");
                printf("\tp = %d",p);
                printf("\tr = %d\n",r);

                max1 = max;
                min1 = min;
                printf("\tq = %d\n",q);
                Min_Max(a , q+1, r);
                printf("right\n");
                printf("\tp = %d",p);
                printf("\tr = %d\n",r);
                printf("\tmin1 = %d\n",min1);
                printf("\tmin = %d\n",min);
                printf("\tmax1 = %d\n",max1);
                printf("\tmax = %d\n",max);
                if(max<max1)
                {
                    max = max1;
                }
                if(min>min1)
                {
                    min = min1;
                }
        }
    }
}

void main()
{
    int a[50],i,n;

    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("\nEnter %d elements:\n",n);

    for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }

    min = a[0];
    max = a[0];

    Min_Max(a,0,n-1);


    printf("Min = %d\nMax = %d\n",min,max);


}
