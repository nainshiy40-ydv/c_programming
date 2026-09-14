#include <stdio.h>

int main()
{
    int n,i,sum=0;
    int a=0,b=1,c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
        printf("\nsum = %d",sum);
    }
    

    return 0;
}
