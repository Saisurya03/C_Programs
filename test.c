#include <stdio.h>
#include<stdbool.h>
// Here the parameter is a static 2D array
void assign(int m, int n, int arr[m][n])
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
		}
	}
}

// Program to pass 2D array to a function in C
int main(void)
{
	int m = 0;
	int n = 0;
	bool s[5];
	int i = 0;
	for(i=0; i<5; i++)
    {
        s[i] = true;
    }

    for(i=0; i<5; i++)
    {
        printf("%b",s[i]);
    }

    scanf("%d",&m);
    n=m;
	int arr[m][n];

	assign(m, n, arr);

	// print 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}
