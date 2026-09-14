#include <stdio.h>

int main()
{
    int l,b;
    int area , perimeter;
    printf("enter the value of length: ");
    scanf("%d",&l);
    printf("enter the value of breadth: ");
    scanf("%d",&b);
    area =l*b;
    perimeter =2 * (l+b);
    
    printf("area of rectangle=%d\n",area);
    printf("perimeter of rectangle=%d\n",perimeter);


    return 0;
}
