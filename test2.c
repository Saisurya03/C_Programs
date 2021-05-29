#include<stdio.h>
#include<conio.h>
#include<string.h>

void toh(int,char,char,char);
void main()
{
   char s[15];
   gets(&s);
   int s1 = LCS(s);
   printf("%d",s1);
}

int* LCS(char *x, char *y)
{
    int m = strlen(x);
    int n = strlen(y);
    int b[m][n];
    int c[m+1][n+1];
    int i,j;

    for(i=0; i<=m; i++)
    {
        c[i][0] = 0;
    }

    for(j=0; j<=n; j++)
    {
        c[0][j] = 0;
    }

    for(i=0; i<m; i++)
    {
        for(i=0; i<m; i++)
        {
            if(x[i]==y[j])
            {
                c[i,j] = 1+
                b[i,j] =
            }
        }
    }
    return n;
}
