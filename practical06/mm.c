void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q])

{

int i,j, k;


        for (i = 0; i < n; i++) // each row of C
        {
                for (j = 0; j < q; j++)  // each column of C
                {
                        for (k = 0; k < p; k++)
                        {
                                C[i][j] += A[i][k]*B[k][j]; //matrix multiplication
                        }
                }
        }

}
