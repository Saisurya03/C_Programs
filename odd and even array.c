#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    for (i=0;i<5;i++)
    {

            printf("Enter a[%d]: ",i);
            scanf("%d",&a[i]);

    }
    printf("\n printing the elements ....\n");
    for(i=0;i<5;i++)
    {

            if(a[i]%2==0)
            {
                printf("%d is even\n",a[i]);
            }
            else
            {
                printf("%d is odd\n",a[i]);
            }

    }
}
