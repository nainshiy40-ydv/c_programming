#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the value of s1,s2,s3: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3)
    {
        printf("equilateral triangle");
    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("isosceles traingle");
    }
    else
    {
        printf("all the three sides of triangle are different so it is called scalen triangle");
    }
}
