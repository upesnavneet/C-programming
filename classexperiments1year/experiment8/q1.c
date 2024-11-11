#include <stdio.h>
int main()
{
    int *var1;
    char *var2;
    float *var3;
    
    int a=10;
    char b='z';
    float c=10.342;
    
    var1=&a;
    var2=&b;
    var3=&c;
    
    printf("value of var1 is: %d\n", *var1);
    printf("address of var1 is: %p\n", var1);
    
    printf("value of var2 is: %c\n", *var2);
    printf("address of var1 is: %p\n", var2);
    
    printf("value of var3 is: %f\n", *var3);
    printf("address of var1 is: %p\n", var3);
    
    return 0;
}