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
void modify()
{ 
    a= ++a;
    b= ++b;
    printf("inside modify() a=%d\n",a);
    printf("inside modify() b=%d\n",b);
    
}
int main()
{#include <stdio.h>
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
void modify()
{
    printf("inside modify() a=%d\n",a);
    printf("inside modify() b=%d\n",b);
    
}
int main()
{
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    modify();
    compare();
    
}
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    compare();
    modify();
    
}
