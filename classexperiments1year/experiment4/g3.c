#include <stdio.h>

void WithBlockScope() 
{
    int block_var = 30;
    printf("In function With BlockScope, block_var: %d\n", block_var);

    {

        int inner_block_var = 40;
        printf("In function With BlockScope, inner_block_var: %d\n", inner_block_var);
    }

    //not uncommenting the next line will cause a compilation error
    // printf("In functionWithBlockScope, inner_block_var: %d\n", inner_block_var);
}

int main() 
{
    WithBlockScope();
    return 0;
}