#include <stdio.h>
int factorial(int num)
{
    int f = 1;

    for(int i=1; i<=num; i=i+1)
    {
        f=f*i;
    }

    return f;
}
int main()
{
    int num;
    printf("Enter the number you want the factorial of: \n");
    scanf("%d", &num);
    
    int result = factorial(num);
    printf("The factorial of the number %d is: %d \n", num, result);

    int a;
    printf("Enter the valure of n for binomial coefficient: \n");
    scanf("%d", &a);

    int b;
    printf("Enter the value of r for binomial coefficient: \n");
    scanf("%d", &b);

    int n = factorial(a);
    printf("Value of %d factorial is %d \n", a, n );
    int r = factorial(b);
    printf("Value of %d factorial is %d \n", b, r );
    int diff = a-b;
    int d = factorial(diff);
    printf("value of %d factorial is %d \n", diff, d);

    float fr = n/(r*d);
    printf("The value of coefficient for the expansion is: %f", fr);

}