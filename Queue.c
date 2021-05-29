#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5

int q[max];
int f=-1;
int r=-1;

void enqueue(int);
int dequeue();
void display();

void main()
{
  int n,val,b,m,ans;
  m=NULL;
    while(1)
  {
     printf("Enter\n1 to enqueue\n2 to dequeue\n3 to display\n4 to exit\n\n");
     scanf("%d",&n);

    switch(n)
    {
       case 1: printf("Enter element to be inserted in queue:\n");
               scanf("%d",&val);
               enqueue(val);
               break;

       case 2:  m=dequeue();
                printf("\n");
                if(m!=NULL)
                {
                  printf("Deleted element is %d\n",m);
                }
                printf("\n");
                break;

       case 3: display();
               break;

       case 4: exit(0);
               break;

       default : printf("Incorrect entry\n");
                 break;
    }
  }
}


void enqueue(int val)
{
  if(r==max-1)
  {
      printf("Queue is overflowing\n");
  }
  else
  {

      q[r]=val;
      r++;
  }
}

int dequeue()
{
  int a;
  if(f==-1&&r==-1)
  {
      printf("Queue is underflowing\n");
  }
  else if(f==r)
  {
      printf("Queue is underflowing\n");
      return 0;
  }
  else
  {
      a=q[f];
      f++;
      return a;
  }
}



void display()
{
  int i;
  if(f==-1&&r==-1)
  {
      printf("Queue is empty\n");
  }
  else if(f>=r)
  {
      printf("Queue is empty\n");
  }
  else
  {
      printf("\n");
    for(i=f; i<r; i++)
    {
      printf("%d\n",q[i]);
    }
    printf("\n");
  }
}
