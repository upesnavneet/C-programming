#include <stdio.h>

int main() {
    int m;
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; ++i) {
        factorial = factorial*i;
    }

    printf("Factorial of %d = %d\n", m, factorial);

    return 0;
}