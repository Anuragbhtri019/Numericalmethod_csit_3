#include <stdio.h>
#include <math.h>

// Define the function f(x, y)
double f(double x, double y) {
    return 1.3 * exp(-x) - 2 * y;
}

int main() {
    double x0 = 0.0; // Initial x
    double y0 = 5.0; // Initial y
    double h = 0.1; // Step size
    int num_steps = 10; // Number of steps
printf("--BY EULERS DIFFERENTIAL--\n");
    for (int i = 0; i < num_steps; ++i) {
        double slope = f(x0, y0);
        y0 = y0 + h * slope;
        x0 = x0 + h;
        printf("Step %d: x = %.2f, y = %.6f\n", i + 1, x0, y0);
    }

    return 0;
}

