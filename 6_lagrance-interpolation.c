
#include <stdio.h>
double lagrange_interpolation(double x[], double y[], int n, double point)
{
    double result = 0.0;
    for (int i = 0; i < n; i++)
        {
        double term = y[i];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                term *= (point - x[j]) / (x[i] - x[j]);
                }
            }
        result += term;
        }
    return result;
}

int main()
{
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    double x[n], y[n];
    printf("Enter the data points:\n");
    for (int i = 0; i < n; i++)
        {
        printf("x[%d]: ", i);
        scanf("%lf", &x[i]);
        printf("y[%d]: ", i);
        scanf("%lf", &y[i]);
        }
    double point;
    printf("Enter the point for interpolation: ");
    scanf("%lf", &point);
    double interpolated_value = lagrange_interpolation(x, y, n, point);

    printf("lagrance Interpolated value at %.2lf is %.6lf\n", point, interpolated_value);
    return 0;
}
