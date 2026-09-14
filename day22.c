#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t;
    float si,amount,ci;
    
    printf("enter the value of p,r,t:");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100;
    amount=p * pow((1+r/100),t);
    ci=amount-p;
    printf("si=%f\n",si);
    printf("ci=%f\n",ci);
    printf("total amount=%f\n",amount);
    

    return 0;
}
