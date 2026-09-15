#include <stdio.h>
int a,b;
void compare()
{
    if (a>b)
    {
        printf("%d is the largest\n",a);
        printf("%d is smallest\n",b);
    }
    else if (a<b)
    {
        printf("%d is the largest\n",b);
        printf("%d is the smallest\n",a);
    }
    else
    {
        printf("both are equal");
    }
}
void local()
{ 
 int a =40;
    printf("local value of a =%d\n",a);
}
void change()
{
    a++;
    printf("after increment of global variable =%d\n",a);

    a--;
    printf("after decrement of global variable =%d\n",a); 
}
int main()
{
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    compare();
    local();
    printf("global value of a=%d\n",a);
    change();
}
