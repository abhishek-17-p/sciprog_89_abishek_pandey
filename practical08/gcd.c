#include <stdio.h>
#include <stdlib.h>

int gcd_interative(int a , int b)
{
	int temp; 
	while (b!=0)
	{
		temp = b; 
		b = a%b; 
		a = temp; 
	}
	return a;

}

int gcd_recursive(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	return gcd_recursive(b, a%b);
}



int main(void)
{
	int a = 6, b = 12; 

	printf("gcd_it is %d\n", gcd_interative(a,b));
	printf("gcd_rec is %d\n", gcd_recursive(a,b));

	return 0;
}
