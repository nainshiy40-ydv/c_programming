#include <stdio.h>

int main()
{
    int n;
    printf("value of n:");
    printf("%d",&n);
    if (n%5==0 && n%11==0)
    {
        printf("divisible by both");
}
else
{
    printf("not divisible by both");
}
    return 0;
}
