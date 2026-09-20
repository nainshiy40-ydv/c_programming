#include <stdio.h>

int a, b;

void compare()
{
    if (a > b)
    {
        int greater = a;   // Block variable
        int smaller = b;   // Block variable

        printf("%d is the largest\n", greater);
        printf("%d is the smallest\n", smaller);
    }

    else if (a < b)
    {
        int greater = b;   // Block variable
        int smaller = a;   // Block variable

        printf("%d is the largest\n", greater);
        printf("%d is the smallest\n", smaller);
    }

    else
    {
        int equal = a;     // Block variable

        printf("Both are equal = %d\n", equal);
    }
}

int main()
{
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    compare();

    return 0;
}
