#include <stdio.h>
#include <stdlib.h>

/* Iterative GCD */
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

/* Recursive GCD: gcd(a, b) = a if b = 0, otherwise gcd(b, a mod b) */
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
        int a, b;
	// read the two numbers from the user
        printf("Please enter two integers\n");
        scanf("%d %d", &a, &b);
	// both methods should give the same answer
        printf("gcd_it is %d\n", gcd_iterative(a, b));
        printf("gcd_rec is %d\n", gcd_recursive(a, b));

        return 0;
}
