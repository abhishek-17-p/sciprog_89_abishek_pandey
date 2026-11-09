#include<stdio.h>

int main(void)

{
	int n = 5, p = 3, q = 4;
	double A[n][p];
	double B[p][q];
	double C[n][q];

	int i,j; 
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<p; j++)
		{
			A[i][j]= i + j;
		}
	}
	for (i = 0; i<p; i++)
	{
		for (j = 0; j<q; j++)
		{
			B[i][j]= i - j;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < q; j++)
		{
			C[i][j]= 0;
		}
	}

	int k;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < q; j++)
		{
			for (k = 0; k < p; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	printf("This is A:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			printf(" %lf", A[i][j]);
		}
		printf("\n");
	}
	printf("This is B:\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf(" %lf", B[i][j]);
		}
		printf("\n");
	}
	printf("This is C:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf(" %lf", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}

