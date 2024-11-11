#include <stdio.h>

struct Employee {
    char name[50];
    double basic_pay;
};

int main() 
{
    struct Employee employees[5];
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter employee %d name: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter employee %d basic pay: ", i + 1);
        scanf("%lf", &employees[i].basic_pay);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < 5; i++) 
    {
        float da = 0.52 * employees[i].basic_pay;
        float gross_salary = employees[i].basic_pay + da;
        printf("employee name: %s", employees[i].name);
        printf("\t%f\n",  gross_salary);
    }

    return 0;
}