#include <stdio.h>

int main()
{
    float fahrenheit,celsius;
    printf("enter the value of celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("fahrenheit=%f\n",fahrenheit);
}
