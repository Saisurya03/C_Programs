#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5

int st[max];
int top=-1;

void push(int);
int pop();
int peep();
void display();

void main()
{
  int n,val,b,m,ans;
    while(1)
  {
     printf("Enter\n1 to push\n2 to pop\n3 to peep\n4 to display\n5 to exit\n\n");
     scanf("%d",&n);

    switch(n)
    {
       case 1: printf("Enter element to be pushed:\n");
               scanf("%d",&val);
               push(val);
               break;

       case 2:  m=pop();
                printf("Deleted element is %d\n",m);
                break;

       case 3: printf("Enter location to peep\n");
               scanf("%d",&b);
               ans=peep(b);
               printf("\n%d\n",ans);
               break;

       case 4: display();
               break;

       case 5: exit(0);
               break;

       default : printf("Incorrect entry\n");
                 break;
    }
  }
}


void push(int val)
{
  if(top==max-1)
  {
      printf("Stack is overflowing\n");
  }
  else
  {
      top++;
      st[top]=val;
  }
}

int pop()
{
  int f;
  if(top==-1)
  {
      printf("Stack is underflowing\n");
  }
  else
  {
      f=st[top];
      top--;
      return f;
  }
}


int peep(int b)
{
   int c;
  if(top==-1)
  {
      printf("Stack is empty\n");
  }
  else
  {
      c=st[top-b+1];
      return c;
  }
}


void display()
{
  int i;
  if(top==-1)
  {
      printf("Stack is empty\n");
  }
  else
  {
    for(i=top; i>=0; i--)
    {
      printf("%d\n",st[i]);
    }
  }
}
