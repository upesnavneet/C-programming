#include <stdio.h>

int main() {
    int n;
    double e = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double factorial = 1.0;
 
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        e += 1.0 / factorial;
    }

    printf("Computed value of Euler's number e: %f\n", e);
    return 0;
}