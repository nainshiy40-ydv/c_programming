#include <stdio.h>

int main()
{
    int num,n,i;
    int positive=0,negative=0,zero=0;
    
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the number%d:",i);
        scanf("%d",&num);
        if (num>0)
        {
            printf("positive value");
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
    printf("\npositive numbers=%d",positive);
    printf("\nnegative numbers=%d",negative);
    printf("\nzeros=%d",zero);
    return 0;
}
