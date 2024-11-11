#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int count = 0;
    int pairs[100][2];

    printf("Enter a number to check if it's a Ramanujan number: ");
    scanf("%d", &num);

    for (int a = 1; a <= cbrt(num); a++) {
        for (int b = a; b <= cbrt(num); b++) {
            if (a * a * a + b * b * b == num) {
                pairs[count][0] = a;
                pairs[count][1] = b;
                count++;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("Pair %d: %d^3 + %d^3\n", i + 1, pairs[i][0], pairs[i][1]);
    }


    if (count >= 2) {
        printf("%d is a Ramanujan number.\n", num);
    } else {
        printf("%d is not a Ramanujan number.\n", num);
    }
}