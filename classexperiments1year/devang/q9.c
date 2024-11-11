#include <stdio.h>

int main() {
    int count = 0;

    printf("Numbers between 1 and 100 that are not divisible by 2 or 3:\n");

    for (int i = 1; i <= 100; ++i) {
        if (i % 2 != 0 && i % 3 != 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal count of numbers not divisible by 2 or 3: %d\n", count);

    return 0;
}