#include <stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    printf("\n Value of variable a is: %d",a);
    printf("\n Address of variable a is: %p", ptr);
    printf("\n Value of Pointer variable ptr is: %d", *ptr);
    return 0;
}