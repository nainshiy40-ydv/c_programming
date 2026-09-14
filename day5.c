#include <stdio.h>

int main()
{
    char ch;
    
    printf("enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='z')
    {
        printf("upper case alphabet");
    }
   else if(ch>='a' && ch<='z')
    
    {
        printf("lower case alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
    

    return 0;
}
