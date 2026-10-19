#include <stdio.h>
struct employee
{
    int employee_id;
    char name[20];
    char cluster[20];
    int salary;
};
int main()
{
    struct employee s1={9078,"Nainshi","cs",34000};
    printf("employee_id=%d\n",s1.employee_id);
    printf("employee name=%s\n",s1.name);
    printf("employee cluster=%s\n",s1.cluster);
    printf("employee salary=%d\n",s1.salary);
    }
