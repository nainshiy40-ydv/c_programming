#include <stdio.h>

int main()
{
    float weight,height,bmi;
    printf("enter your weight in kg: ");
    scanf("f",&weight);
    printf("enter height i m: ");
    scanf("f",&height);
    if(weight <= 0 || height <= 0){
        printf("invalid weight or height.\n");
    }
bmi = weight/(height*height);
printf("bmi is: %0.2f\n",bmi);
if (bmi<18.5){
    printf("category:underweight\n");
}
else if(bmi<25.0){
    printf("healthy weight\n");
}
else if (bmi<30.0){
    printf("overwweight\n");
}
else{
    printf("category: obsesity\n");
}
  return 0; 
}
