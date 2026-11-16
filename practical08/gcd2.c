#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

        srand(time(NULL));

        int a = rand() % (rand_upper-rand_lower);
        int b = rand() % (rand_upper-rand_lower);

        printf("a = %d, b = %d\n", a, b);
        printf("gcd_it is %d\n", gcd_iterative(a, b));
        printf("gcd_rec is %d\n", gcd_recursive(a, b));

	FILE* fp;
	fp = fopen("gcd.txt","w");
	fprintf(fp,"a = %d, b = %d\n", a, b);
        fprintf(fp,"gcd_it is %d\n", gcd_iterative(a, b));
        fprintf(fp,"gcd_rec is %d\n", gcd_recursive(a, b));
        return 0;
}
