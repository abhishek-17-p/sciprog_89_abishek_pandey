#include<stdio.h>
#include<math.h>

void fib(int* a, int* b);

int main(void)
{
	int n; 
	printf("Please enter a value for n\n");
	scanf("%d", &n);

	if (n<=1)
	{
		printf("n must be greater than or equal to 2");
		return -1;
	}

	int f0 = 0; 
	int f1 = 1; 
	int i; 

	for (i = 2; i<=n; i++)
	{
		fib(&f1,&f0);
		printf ("%d\n",f1);

	}

	return 0;
}


void fib(int* a, int* b)
{
	int next;

	next = (*a) + *(b);
	*b = *a;
	*a = next;
}
