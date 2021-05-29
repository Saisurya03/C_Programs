#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct node
{
  int data;
  struct node* left;
  struct node* right;
};

void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);

struct node* insert(struct node*, int );
struct node* delete(struct node*, int );
struct node* FindMin(struct node* );

void main()
{
   int i,n,val,d;
   struct node* root;
   root=NULL;
   printf("Enter number of nodes to be inserted:\n");
   scanf("%d",&n);

   printf("\nEnter %d elements:\n",n);

   for(i=0; i<n; i++)
   {
       scanf("%d",&val);

       root=insert(root,val);
   }

   printf("\nPREORDER TRAVERSAL:\n");
   preorder(root);

   printf("\nINORDER TRAVERSAL:\n");
   inorder(root);

   printf("\nPOSTORDER TRAVERSAL:\n");
   postorder(root);

   printf("\nEnter number to be deleted");
   scanf("%d",&d);
   delete(root,d);

   printf("\nINORDER TRAVERSAL:\n");
   inorder(root);
}


struct node* insert(struct node* r, int data)
{
    if(r==NULL)
    {
        r=(struct node*)malloc(sizeof(struct node));
        r->data=data;
        r->left=NULL;
        r->right=NULL;

    }
    else if(data<r->data)
    {
        r->left=insert(r->left,data);
    }
    else if(data>r->data)
    {
        r->right=insert(r->right,data);
    }
    return r;
};

void preorder(struct node* r)
{
    if(r!=NULL)
    {
       printf("%d\t",r->data);
       preorder(r->left);
       preorder(r->right);
    }
}

void inorder(struct node* r)
{
    if(r!=NULL)
    {
       inorder(r->left);
       printf("%d\t",r->data);
       inorder(r->right);
    }
}

void postorder(struct node* r)
{
    if(r!=NULL)
    {
       postorder(r->left);
       postorder(r->right);
       printf("%d\t",r->data);
    }
}

struct node* delete(struct node* r, int data)
{
    if(r==NULL)
    {
        return NULL;
    }
    else if(data<r->data)
    {
        r->left=delete(r->left,data);
    }
    else if(data>r->data)
    {
        r->right=delete(r->right,data);
    }
    else
    {
        if(r->left==NULL&&r->right==NULL)
        {
            free(r);
            r=NULL;
        }

        else if(r->left==NULL)
        {
           struct node* temp = r;
           r=r->right;
           free(temp);
        }
        else if(r->right==NULL)
        {
           struct node* temp = r;
           r=r->left;
           free(temp);
        }
        else
        {
            struct node* temp = FindMin(r->right);
            r->data=temp->data;
            r->right=delete(r->right,temp->data);
        }
    }

    return r;
}

struct node* FindMin(struct node* r)
{
    if(r->left!=NULL)
    {
        return FindMin(r->left);
    }
    return r;
}
