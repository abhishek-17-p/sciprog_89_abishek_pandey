#include <stdio.h>
#include <stdlib.h>

// iterative version: repeat until b is 0, then a is the GCD
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
// recursive version: gcd(a, b) = a if b = 0, otherwise gcd(b, a mod b)
int gcd_recursive(int a, int b)
{
	if (b==0) // stopping case
	{
		return a;
	}
	return gcd_recursive(b, a%b);
}



int main(void)
{
	int a = 6, b = 12; 
	// both methods should give the same answer
	printf("gcd_it is %d\n", gcd_interative(a,b));
	printf("gcd_rec is %d\n", gcd_recursive(a,b));

	return 0;
}
