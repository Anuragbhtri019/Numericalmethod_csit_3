#include <stdio.h>

// Evaluate the polynomial using Horner's method
  double evaluatePolynomial(double coefficients[], int n, double x)
   {
    double result = coefficients[n];
    for (int i = n - 1; i >= 0; i--)
        {
        result = result * x + coefficients[i];
        printf("Step %d: Result = %.6f\n", n - i, result);
        }
    return result;
}

int main() {
    // Example: Evaluate 2x^3 - 6x^2 + 2x - 1 at x = 3
    double coefficients[] = {2, -6, 2, -1};
    int n = sizeof(coefficients) / sizeof(coefficients[0]);
    double x = 2;
    printf("--SOLUTION BY HORNER'S METHOD--");
    printf("\n");

    double value = evaluatePolynomial(coefficients, n - 1, x);
    printf("\nValue of the polynomial at x = %.2f is %.6f\n", x, value);

    return 0;
}
