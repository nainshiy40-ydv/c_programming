#include <stdio.h>

struct complex
{
    int real;
    float imag;
};

struct complex add(struct complex c1, struct complex c2)
{
    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct complex sub(struct complex c1,struct complex c2)
{
    struct complex result;
    result.real=c1.real - c2.real;
    result.imag=c1.imag - c2.imag;
    return result;
}

struct complex readComplex()
{
    struct complex complex;
    printf("Enter real part: ");
    scanf("%d", &complex.real);
    printf("Enter imaginary part: ");
    scanf("%f", &complex.imag);
    return complex;
}
void writeComplex(struct complex c)
{
    printf("%d + %.2fi", c.real, c.imag);
}

int main()
{
    struct complex c1, c2,sum,diff;

    c1.real = 4;
    c1.imag = 4.5;

    c2.real = 5;
    c2.imag = 5.5;

    sum = add(c1,c2);
    diff=sub(c1,c2);

    printf("\nAddition = %d + %.2fi", sum.real, sum.imag);
    printf("\nsubstraction=%d - %.2fi",diff.real,diff.imag);
    printf("\n%d + %.2fi", c1.real, c1.imag);
    printf("\nEnter first complex number:\n");
    c1 = readComplex();
    printf("\nEnter second complex number:\n");
    c2 = readComplex();
    printf("\nFirst complex number = ");
    writeComplex(c1);
    printf("\nSecond complex number = ");
    writeComplex(c2);
    return 0;
}
