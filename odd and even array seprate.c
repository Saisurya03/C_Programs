#include<stdio.h>
#include<conio.h>
void main()
{
    int p,q;
    int a[10],e[10],o[10],i;
    p=0;
    q=0;
    for (i=0;i<10;i++)
    {

            printf("Enter a[%d]: ",i);
            scanf("%d",&a[i]);

    }

    for(i=0;i<10;i++)
    {

            if(a[i]%2==0)
            {
                e[p]=a[i];
                p++;
            }
            else
            {
                o[q]=a[i];
                q++;
            }

    }
    printf("\n printing even elements ....\n");
    for(i=0;i<p;i++)
    {
                printf("%d\n",e[i]);

    }
    printf("\n printing odd elements ....\n");
    for(i=0;i<q;i++)
    {
                printf("%d\n",o[i]);

    }
}
