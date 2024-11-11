#include <stdio.h>
int global_var = 10;

void function1() 
{
    printf("In function1, global_var: %d\n", global_var);
}

void function2() 
{
    printf("In function2, global_var: %d\n", global_var);
}

int main() 
{
    printf("In main, global_var: %d\n", global_var);
    function1();
    function2();
    return 0;
}