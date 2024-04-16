#include <stdio.h>

void least_squares(double x[], double y[], int n, double *A, double *B)
{
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x_squared = 0;

    for (int i = 0; i < n; i++)
     {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x_squared += x[i] * x[i];
     }

    double denominator = n * sum_x_squared - sum_x * sum_x;
    *B = (n * sum_xy - sum_x * sum_y) / denominator;
    *A = (sum_y - *B * sum_x) / n;
}

int main()
{
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    double x[n], y[n];
    printf("Enter the data points (x, y):\n");

    for (int i = 0; i < n; i++)
     {
        printf("x[%d]: ", i);
        scanf("%lf", &x[i]);
        printf("y[%d]: ", i);
        scanf("%lf", &y[i]);
     }

    double A, B;
    least_squares(x, y, n, &A, &B);
    printf("The line of best fit: Y = %.6lf + %.6lfX\n", A, B);
    return 0;
}







