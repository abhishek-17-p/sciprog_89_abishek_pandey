#include<stdio.h>
#include<math.h>

int main(void)

{	int N = 12, i;
	double a=0, b_deg = 60;
	double b_rad = (M_PI*b_deg)/(180.0);

	double area = tan(a) + tan (b_rad); 

	for (i = 5; i<60; i+=5)
	{
		area = area + 2 * tan((M_PI*i)/180.0);
	}

	double prefactor = (b_rad-a)/(2*N); 
	area *= prefactor;
	printf("Value for the integration is %.16lf\n", area);
	return 0;

}
