#include <stdio.h>

void functionWithStaticLocal() 
{
    static int local_var = 50;
    local_var++;
    printf("In functionWithStaticLocal, static_local_var: %d\n", local_var);
}

int main() {
    functionWithStaticLocal(); 
    functionWithStaticLocal(); 
    functionWithStaticLocal(); 
    return 0;
}