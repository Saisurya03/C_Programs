#include<stdio.h>
#include<conio.h>

int prime(int);
int main()
{
    int num,ans;
    printf("Enter number: ");
    scanf("%d",&num);
    ans=prime(num);
    if(ans==1)
    {
        printf("\n Number is prime");
    }
    else
    {
        printf("\n Number is not prime");
    }
}
int prime(int num)
{
    int i,f;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            f=1;
            break;
        }
        else
        {
            f=0;
        }
    }
        if(f==1)
        {
            return 0;
        }
        else
        {
            return 1;
        }

}
