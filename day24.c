// write a program to swap two numbers using third variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   
    printf("after swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
