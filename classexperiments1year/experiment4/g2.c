#include <stdio.h>
int global_var = 10;

void functionWithLocal() 
{
    int local_var = 20;
    printf("In functionWithLocal, local_var: %d\n", local_var);
    printf("In functionWithLocal, global_var: %d\n", global_var);
}

int main() 
{
    functionWithLocal();
    printf("In main, global_var: %d\n", global_var);
    return 0;
}