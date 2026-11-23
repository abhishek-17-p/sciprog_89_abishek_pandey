#include<stdio.h>
#include<math.h>

int main(void)

{	int N = 12, i;
	double a=0, b_deg = 60;
	double b_rad = (M_PI*b_deg)/(180.0); // convert upper limit to radians

	// add the two end points once
	double area = tan(a) + tan (b_rad); 

	// add the inner points (5 to 55 degrees) twice
	for (i = 5; i<60; i+=5)
	{
		area = area + 2 * tan((M_PI*i)/180.0);
	}

	// multiply by (b - a) / 2N to get the area
	double prefactor = (b_rad-a)/(2*N); 
	area *= prefactor;
	printf("Value for the integration is %.16lf\n", area);
	return 0;

}
