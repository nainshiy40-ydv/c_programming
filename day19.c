#include <stdio.h>

int main()
{
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("positive number");
    }
    else if(num<0)
    {
        printf("negative number");
    }
    else
    {
        printf("number is zero");
    }
}
