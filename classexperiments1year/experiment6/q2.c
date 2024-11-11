#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return GCD(num2, num1 % num2);
    }
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = GCD(num1, num2);
    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}