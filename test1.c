#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertAtBeginning(int);
void insertAtEnd(int);
void insertBetween(int,int,int);
void display();
void removeBeginning();
void removeEnd();
void removeSpecific(int);

struct Node
{
   int data;
   struct Node *next;
}*head = NULL;

void main()
{
   int n=0;

   while(1){
   printf("\nEnter 1 to enter, 2 to display and 3 to exit\n");
   scanf("%d",&n);
   switch(n)
   {
      case 1: printf("\nEnter value");
              scanf("%d",&n);
              insertAtBeginning(n);
              break;

      case 2:display();
              break;

      case 3: exit(0);
              break;

      default:printf("Invalid entry");
              break;
   }
   }
}

void insertAtBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }
   printf("\nOne node inserted!!!\n");
}
void display()
{
  int n=0,b=0;
   if(head==NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp != NULL)
      {
	   n= n*10+ temp->data;
	   temp = temp->next;
      }

	   printf("%d\n\n",n);

      while(n != 0)
      {
	      b= b*10 + n%10;
	       n=n/10;
      }
	   printf("%d",b);
   }
}
