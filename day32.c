#include <stdio.h>

int a, b;   // Global variables

void compare()
{
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

void modify()
{
    a++;
    b++;

    printf("Inside modify() a = %d\n", a);
    printf("Inside modify() b = %d\n", b);
}

int main()
{
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    modify();
    compare();

    return 0;
}
