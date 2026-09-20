#include <stdio.h>

int a, b;

void compare()
{
    static int count = 0;   // Static local variable
    count++;

    printf("Function called %d time(s)\n", count);

    if (a > b)
    {
        printf("%d is the largest\n", a);
        printf("%d is the smallest\n", b);
    }
    else if (a < b)
    {
        printf("%d is the largest\n", b);
        printf("%d is the smallest\n", a);
    }
    else
    {
        printf("Both are equal\n");
    }
}

int main()
{
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    compare();
    compare();
    compare();

    return 0;
}
