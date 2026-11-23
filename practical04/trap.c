#include<stdio.h>
#include<math.h>

#define N 12 

float degtorad(float degang);

float traprule(float TanArr[N+1]);
float TanArr[N+1]; // global array holding the 13 tan values

int main(void)

{
	int i;
	float deg;

	// fill the array with tan(x) for x = 0, 5, 10, ... 60 degrees
	for( i = 0; i<=N; i++)
	{
		deg = i * 5.0; 
		TanArr[i] = tan(degtorad(deg));
		printf("x = %f, f(x) = %f\n", deg, TanArr[i]);
	}
	printf("The trap rule gives us %f\n",traprule(TanArr));
	printf("THe actual answer is %f\n", log(2.0));
	return 0;
}

// converts an angle from degrees to radians
float degtorad (float degang)

{
	return ((M_PI*degang) / 180.0);
}

// applies the trapezoidal rule to the array and returns the area
float traprule(float TanArr[N+1])
{
	float area;
	int i;
	area = TanArr[0] + TanArr[N]; 

	for ( i = 1; i<N; i++)
	{
		area += 2*TanArr[i]; 
	}
	float mult_rad = degtorad((60-0))/(2*N); // (b - a) / 2N in radians
	area*=mult_rad;
	return area;
}
