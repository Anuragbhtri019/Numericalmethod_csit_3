#include <stdio.h>
#include <math.h>
#define f(x) (x * x * x - 3 * x - 2)
#define df(x) (3 * x * x - 3)
#define MAX_ITER 100
    int main()
    {
    double x0, x1, error, e;
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    printf("Enter error precision: ");
    scanf("%lf", &e);
    int iter = 1;
      printf("---SOLUTION BY NEWTON-RAPHSON METHOD---\n\n");
    printf("\nIteration\t x\t\t f(x)\t\t f'(x)\t\t Error\n");
        do
        {
        double fx0 = f(x0);
        double dfx0 = df(x0);
        x1 = x0 - fx0 / dfx0;
        error = fabs(x1 - x0);
        printf("%d\t\t %.6f\t %.6f\t %.6f\t %.6f\n", iter, x0, fx0, dfx0, error);
        x0 = x1;
        iter++;
                if (iter > MAX_ITER)
                {
                printf("Maximum number of iterations reached.\n");
                break;
                }
        }while (error > e);
    printf("\nRoot is: %.6f\n", x1);
    return 0;
    }


