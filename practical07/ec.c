#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Recursice factorial: n! = n * (n-1)!
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
// returns one term of the series, x^n / n!
double poly_term (double x, int n)
{
    return pow(x,n)/factorial(n);
}

int main(void)
{
    int order;
    double x = 1;
    printf("Please input the order\n");
    scanf("%d", &order);

    // one place for each term, orders 0 to order
    double *term = (double *)malloc((order + 1) * sizeof(double));
    if (term == NULL) // stop if memory could not be allocated
    {
        printf("Didn't work!\n");
        exit(1);
    }

    int i;
    double e=0;
    // calculate each term, store it, and add it to the total
    for ( i = 0; i <= order; i++)
    {
        term[i] = poly_term(x,i);
        e+=term[i];
    }

    printf("%.16lf\n",e);
    // give the memory back and clear the pointer
    free(term);
    term = NULL;
    return 0;
}
