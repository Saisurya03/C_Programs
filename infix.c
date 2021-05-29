#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

#define max 25

char inf[max],pol[max],temp[max];
int top=0;

void push(char);
void display();
char pop();
int f(char);

void main()
{
  char temp[26],c;
  int i,n,b=0;
  printf("Enter infix expression\n");
  gets(inf);
  pol[0]='#';
  n=strlen(inf);
  for(i=0; i<=n; i++)
   {
      while(f(inf[i])<=f(pol[top]))
      {
         pop();
         b++;
      }
       push(inf[i]);
   }
   display(pol);
}



void push(char val)
{
  if(top==max)
  {
      printf("Stack is overflowing\n");
  }
  else
  {
      top++;
      pol[top]=val;
  }
}

char pop()
{
  char x;
  if(top==0)
  {
      printf("Stack is empty\n");
  }
  else
  {
      x=inf[top];
      top--;
      return x;
  }
}

int f(char c)
{
  switch(c)
   {
     case '+' : return 1;
              break;
     case '-' : return 1;
              break;
     case '*' : return 2;
              break;
     case '/' : return 2;
              break;
     case '#' : return 0;
              break;

     default : return 4;
              break;
   }
}

void display()
{
  int i;
  if(top==0)
  {
      printf("Stack is empty\n");
  }
  else
  {
    for(i=top; i>0; i--)
    {
      printf("%c",pol[i]);
    }
  }
}
