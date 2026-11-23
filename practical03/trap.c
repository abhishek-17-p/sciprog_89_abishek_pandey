#include<stdio.h>
#include<math.h>     

int main(void)

{

	int N = 1200;                      // number of strips 
	double a = 0;                      // lower limit of the integral
	double b = M_PI/3;                 // upper limit of the integral
	double int_value = 0;              // running total of the integral
	double prefactor = (b-a)/(2*N);    // (b - a) / 2N, multiplies the final sum


	int_value += tan(a) + tan(b);      // add the two end points once

	double step_size = (b-a)/N;        // width of each strip
	int i = 0;                         // loop counter
	double x_n;                        // x value of the current inner point

	// loop over the inner points x_1 ... x_(N-1)
	for(i =1; i<N; i++)
	{
		x_n = a + i*step_size;         // position of the i-th point
		int_value += 2*tan(x_n);       // inner points are counted twice
	}

	int_value *= prefactor;            // multiply the sum by (b - a) / 2N

	// print the estimate and the exact value to 16 decimal places

	printf("The estimate is %.16lf \n", int_value);
	printf("The actual answer is %.16lf \n", log(2));

	return 0;
}