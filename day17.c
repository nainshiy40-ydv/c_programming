#include <stdio.h>

int main()
{
    float percentage;
    printf("enter the value of percentage: ");
    scanf("%f",&percentage);
    if (percentage<=100 && percentage>=90)
    {
        printf("grade A");
    }
    else if(percentage<=89 && percentage>=80)
    {
        printf("grade B");
    }
    else if(percentage<=79 && percentage>=70)
    {
        printf("grade C");
    }
    else if(percentage<=69 && percentage>=60)
    {
        printf("grade D");
    }
    else
    {
        printf("below 60 fail");
    }
    return 0;
}
