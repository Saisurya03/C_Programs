#include<stdio.h>
#include<conio.h>
void swap(int, int);
void main()
{
   int a,b;
   printf("Enter numbers to swap\n");
   scanf("%d%d",&a,&b);
   printf("Numbers before swapping:\n%d\n%d",a,b);
   swap(a,b);
   printf("\nNumbers after swapping\n");
   printf("%d\n%d",a,b);

}
void swap (int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
