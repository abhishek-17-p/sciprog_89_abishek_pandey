#include <stdio.h>
#include <math.h>

double arctanh1(double x, double delta);
double arctanh2(double x);

int main(void)
{
	double delta;  // precision for the series
	printf("Print enter a real number with absoule value less than 1 \n" );
	scanf ("%lf", &delta);


	double start = -0.9;
	double end = 0.9; 
	double step = 0.01; 

	int length = 1+ (end-start)/step; // number of x values 
	double arctanh1_arr[length]; // results from the series
	double arctanh2_arr[length]; // results from the logarithm formula
	int i;
	
	// calculate both methods for each x and print the difference
	for (i = 0; i < length; i++)
	{
		arctanh1_arr[i] = arctanh1(start + i * step, delta);
		arctanh2_arr[i] = arctanh2(start + i * step);
		printf("The diff. is %.10lf\n", fabs(arctanh1_arr[i]-arctanh2_arr[i]));

	}

	return 0;
}

// Maclaurin series sums until a term is smaller than delta
double arctanh1(double x, double delta)

{
	int i=0; 
	double sum = 0; 
	double term; 
	do
	{
		term = pow(x, (2*i)+1)/ (double) ((2*i) + 1);
		sum += term;
		i++;
	} while (fabs(term)>delta); 
	return sum;
}

// logarithm form: 0.5 * [ln(1 + x) - ln(1 - x)]

double arctanh2(double x)

{
	return (0.5)*(log(1+x)-log(1-x));
}
