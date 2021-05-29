#include <stdio.h>


void push(int);
int pop();
void display();

void assign(int m, int arr[m][m])
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j]=0;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d",&arr[i][j]);
		}
	}

	dfs(int m, int arr[m][n], int st[m], int visited[m]);
}

void dfs(int m, int arr[m][n], int st[m], int visited[m])
{
    visited[v] = 1
    top++;
    st[top]=0;

	for (int i = 0; i < m; i++) {
        if (visted[i]==0)
        {
            dfs(m,n,v,arr[m][m])
        }
	}
	}
}

void df_search(int m,int v, int arr[m][n])
{
    int i,j=0;
    int visited[n];

    for (int i = 0; i < m; i++) {
        visited[i] = 0;
	}

	for (int i = 0; i < m; i++) {
        if (visted[i]==0)
        {
            dfs(m,n,v,arr[m][n])
        }
	}
}
void main(void)
{
	int m = 0;
    scanf("%d",&m);
	int arr[m][m];

	assign(m,arr);
    int visited[n];
    int st[n];
    int f=0,top=-1;

    for(i=0; i<n; i++)
    {
        visited[i] = 0;
        st[i] = 0;
    }
	// print 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}

void push(int n,int st[n])
{
  if(top==n-1)
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
