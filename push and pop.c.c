#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
int top=-1;st[10];
void main()
{
    int n;
    printf("Enter 1 to push and 2 to pop");
    scanf("%d",&n);
    switch(n)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        default: printf("Invalid entry");
                 break;
    }

}
void push()
{   int c,val;
     if(top==5)
     {
       printf("Stack overflow");
     }
     else
     {
         printf("Enter number of elements to push");
         scanf("%d",&c);
         for(i=)
         scanf("%d",&val);
         st[top]=val;
         top++;
     }
}
void pop()
{
     if(top==-1)
     {
       printf("Stack empty");
     }
     else
     {
         printf("Enter elements to push");
         top--;
     }
}
