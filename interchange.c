#include<stdio.h>
#include<conio.h>
void main()
{
    int min,max,a[5];
    int h,t,m,i;
    printf("Enter any five integer values\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0; i<5; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            h=i;
        }
    }
    min=a[i];
    for(i=0; i<5; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            t=i;
        }
    }
    printf("max=%d, min=%d\n\n",max,min);

    m=a[h];
    a[h]=a[t];
    a[t]=m;

    for(i=0; i<5; i++)
    {
        printf("%d\n",a[i]);
    }
}
