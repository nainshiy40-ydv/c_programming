#include <stdio.h>

int main() {
    int a, b;
    char operation;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        printf("Addition = %d", a + b);
    }
    else if (operation == '-') {
        printf("Subtraction = %d", a - b);
    }
    else if (operation == '*') {
        printf("Multiplication = %d", a * b);
    }
    else if (operation == '/') {
        if (b != 0) {
            printf("Division = %d", a / b);
        }
        else {
            printf("Cannot divide by zero");
        }
    }
    else {
        printf("Invalid operation");
    }

    return 0;
}
