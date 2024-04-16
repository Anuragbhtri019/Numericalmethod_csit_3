#include <stdio.h>
#include <math.h>
#define MAX 100
void Cholesky_Decomposition(int n, int matrix[][MAX])
{
        double lower[MAX][MAX] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                double sum = 0;
                if (j == i)
                    {
                    for (int k = 0; k < j; k++)
                    sum += pow(lower[j][k], 2);
                    lower[j][j] = sqrt(matrix[j][j] - sum);
                    }
                else
                {
                for (int k = 0; k < j; k++)
                sum += (lower[i][k] * lower[j][k]);
                lower[i][j] = (matrix[i][j] - sum) / lower[j][j];
                }
            }
        }
        printf("%12s%40s\n", "Lower Triangular", "Transpose");
        for (int i = 0; i < n; i++)
         {
            for (int j = 0; j < n; j++)
            printf("%12.6f\t", lower[i][j]);
            printf("\t");
            for (int j = 0; j < n; j++)
            printf("%12.6f\t", lower[j][i]);
            printf("\n");
         }
}
int main()
{
    int n;
    int matrix[MAX][MAX];
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter A[%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);
        }
    }
    printf("--BY CHOLESKY METHOD--\n ");
    Cholesky_Decomposition(n, matrix);

    return 0;
}


