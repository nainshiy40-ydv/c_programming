#include <stdio.h>

int main()
{
    float r,pi=3.14;
    float area ,circumference;
    printf("enter the value of radius: ");
    scanf("%f",&r);
  
    area =pi*r*r;
    circumference=2*pi*r;
    
    printf("area of circle=%.2f\n",area);
    printf("circumference=%.2f\n",circumference);


    return 0;
}
