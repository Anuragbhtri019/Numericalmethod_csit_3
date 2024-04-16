    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    /* Defining equation to be solved */
    #define f(x) (x * x - 5 * x + 6)
    int main()
    {
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;
    printf("Enter initial guesses:\n");
    scanf("%f%f", &x0, &x1);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
        if (fabs(x1 - x0) < 1e-6)
         {
         printf("Initial guesses are too close. Please provide different guesses.\n");
         return 1;
         }
      printf("__SOLUTION USING SECANT METHOD__\n");
     printf("\nIteration\tx0\t\tx1\t\tx2\t\tf(x2)\t\terror\n");
            do
             {
            f0 = f(x0);
            f1 = f(x1);
                if (f0 == f1)
                {
                printf("Mathematical Error.");
                return 1;
                }
            x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
            f2 = f(x2);
            float error = fabs(x2 - x1);
            printf("%d\t\t%.6f\t%.6f\t%.6f\t%.6f\t%.6f\n", step, x0, x1, x2, f2, error);
            x0 = x1;
            f0 = f1;
            x1 = x2;
            f1 = f2;
            step++;
            }
     while (fabs(f2) > e);
    printf("\nRoot is: %.6f\n", x2);
    return 0;
    }
