#include <stdio.h>

int FIBO(int num) {
    if (num <= 1) {
        return num;
    } else {
        return FIBO(num - 1) + FIBO(num - 2);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d:\n", num);
    for (int i = 0; i <= num; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}