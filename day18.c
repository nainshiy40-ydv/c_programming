#include <stdio.h>
int main()
{
    int year;
    float population=100000;
    for(year=1;year<10;year++)
    {
        population=population+(population*10/100);
     printf("population at the end of year %d=%f\n",year,
population);
    }
}
