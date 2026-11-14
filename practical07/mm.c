#include <stdio.h>
#include <stdlib.h>
int *allocatearray(int n);
void fillwithones(int *a, int n);
void printarray(int *a, int n);
void freearray(int *a);


int *allocatearray(int n)
{
    int *a = (int *)malloc(n * sizeof(int));
    /* int *a = (int *)calloc(n, sizeof(int));   same, but sets every value to 0 */
    if (a == NULL)
    {
        printf("Didn't work!\n");
        exit(1);
    }
    return a;
}

void fillwithones(int *a, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        a[i] = 1;
    }
}
void printarray(int *a, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
void freearray(int *a)
{
    free(a);
}
int main(void)
{
    int n;
    printf("Please enter the size of the array\n");
    scanf("%d", &n);

    int *a = allocatearray(n);   
    fillwithones(a, n);
    printarray(a, n);
    freearray(a);
    a = NULL;

    return 0;
}

