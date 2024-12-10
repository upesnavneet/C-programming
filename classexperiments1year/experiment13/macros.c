#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))

int main() {
    int x = 10, y = 5;
    printf("Addition: %d\n", ADD(x, y));
    printf("Subtraction: %d\n", SUBTRACT(x, y));
    printf("Multiplication: %d\n", MULTIPLY(x, y));
    printf("Division: %d\n", DIVIDE(x, y));

    return 0;
}