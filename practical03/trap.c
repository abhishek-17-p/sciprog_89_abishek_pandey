#include<stdio.h>
#include<math.h>

int main(void)

{

	int N = 1200;
	double a = 0;
	double b = M_PI/3;
	double int_value = 0;
	double prefactor = (b-a)/(2*N);


	int_value += tan(a) + tan(b);

	double step_size = (b-a)/N;
	int i = 0;
	double x_n;

	for(i =1; i<N; i++)
	{
		x_n = a + i*step_size;
		int_value += 2*tan(x_n);
	}

	int_value *= prefactor;

	printf("The estimate is %.16lf \n", int_value);
	printf("The actual answer is %.16lf \n", log(2));

	return 0;
}
