#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", ADD(a, b));
    printf("Subtraction = %.2f\n", SUB(a, b));
    printf("Multiplication = %.2f\n", MUL(a, b));

    if (b != 0)
        printf("Division = %.2f\n", DIV(a, b));
    else
        printf("Division by zero is not possible.");

    return 0;
}
