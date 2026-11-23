#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// iterative GCD
int gcd_iterative(int a, int b)
{
        int temp;
        while (b != 0)
        {
                temp = b;
                b = a % b;
                a = temp;
        }
        return a;
}

// recursive GCD
int gcd_recursive(int a, int b)
{
        if (b == 0)
        {
                return a;
        }
        return gcd_recursive(b, a % b);
}

int main(void)
{
	int rand_upper=100;
	int rand_lower=1;

        srand(time(NULL)); // seed with the current time so the numbers change each run

	// random integers in the range set by rand_upper and rand_lower
        int a = rand() % (rand_upper-rand_lower);
        int b = rand() % (rand_upper-rand_lower);

        printf("a = %d, b = %d\n", a, b);
        printf("gcd_it is %d\n", gcd_iterative(a, b));
        printf("gcd_rec is %d\n", gcd_recursive(a, b));

	// write the same results to gcd.txt
	FILE* fp;
	fp = fopen("gcd.txt","w");
	fprintf(fp,"a = %d, b = %d\n", a, b);
        fprintf(fp,"gcd_it is %d\n", gcd_iterative(a, b));
        fprintf(fp,"gcd_rec is %d\n", gcd_recursive(a, b));
        return 0;
}
