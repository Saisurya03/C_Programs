#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void ins_beg();
void ins();
void ins_end();
void del_beg();
void del();
void del_end();
void dis_for();
void dis_rev();

struct node
{
 int data;
 struct node *prev;
 struct node *next;
}*temp=NULL,*first=NULL,*last=NULL;

int count=0;

void main()
{
   int n;

   while(1)
   {
      printf("Enter: \n1 to insert at beginning \n2 to insert at a location\n3 to insert from end \n4 to delete from beginning \n5 to delete at a location\n6 to delete at end \n7 to display in forward direction \n8 to display in reverse direction \n9 to exit\n");
      scanf("%d",&n);

      switch(n)
      {
          case 1: ins_beg();
                  break;
          case 2: ins();
                  break;
          case 3: ins_end();
                  break;
          case 4: del_beg();
                  printf("Element deleted!\n");
                  break;
          case 5: del();
                  printf("Element deleted!\n");
                  break;
          case 6: del_end();
                  printf("Element deleted!\n");
                  break;
          case 7: printf("\n");
                  dis_for();
                  break;
          case 8: printf("\n");
                  dis_rev();
                  break;
          case 9: exit(0);
                  break;
         default: printf("Invalid entry\n");
                  break;
      }
   }
}

void ins_beg()
{
    int val;
    struct node *link;
    link=(struct node *)malloc(sizeof(struct node));
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element to be inserted\n");
    scanf("%d",&val);
    temp->data=val;

    if(first==NULL)
    {
        first=temp;
        first->prev=NULL;
        first->next=NULL;
    }
    else
    {
        first->prev=temp;
        temp->next=first;
        temp->prev=NULL;
        first=temp;
    }
    link=first;
    while(link!=NULL)
    {
        last=link;
        link=link->next;
    }
    count++;
}

void ins()
{
    int val,i,n;
    i=0;
    struct node *link;
    link=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    link=first;
    printf("Enter after which element you wish to enter\n");
    scanf("%d",&n);
    printf("Enter element to be inserted\n");
    scanf("%d",&val);

    temp->data=val;

     while(link->data!=n)
     {
         if(link->next=NULL)
         {
             printf("Element not found\n");
         }
         else
         {
             link=link->next;
         }
     }
     struct node*link
     temp->next=link->next->next;
     link->next=temp;
     temp->prev=link;

}

void del()
{
    int val,i,n;
    i=0;
    struct node *link;
    link=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    link=first;

     if(first==NULL)
     {
         printf("List is empty\n");
     }

     else if(i>count)
     {
         printf("Invalid location\n");
     }
     else
     {
         printf("Enter location at which you want to delete element\n");
         scanf("%d",&n);

         for(i=0; i<n-1; i++)
         {
              link=link->next;
         }

        link=link->next;

         while(link!=NULL)
         {
             link=link->next;
             last=link;
         }
     }
}


void ins_end()
{
    int val;
    struct node *link;
    link=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    link=first;

    while(link!=NULL)
    {
        last=link;
        link=link->next;
    }

    printf("Enter value to be inserted\n");
    scanf("%d",&temp->data);

    if(first==NULL)
    {
        last=temp;
        first=last;
    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
    last->next=NULL;
}


void dis_for()
{
    if(first==NULL)
    {
        printf("List is empty\n");
    }
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


void del_beg()
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp=first;
    if(first==NULL)
    {
        printf("List is empty\n");
    }
    else
    first=first->next;
    free(temp);
}

void del_end()
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp=last;
    if(first==NULL)
    {
        printf("List is empty");
    }
    last=last->prev;
    last->next=NULL;
    free(temp);
}

void dis_rev()
{
    if(first==NULL)
    {
        printf("List is empty\n");
    }
    temp=last;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
}
