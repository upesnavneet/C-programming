#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n;

    printf("P\t\tr\t\tn\t\tV\n");

    for (P = 1000; P <= 10000; P += 1000) {
        for (r = 0.10; r <= 0.20; r += 0.01) {
            for (n = 1; n <= 10; ++n) {
                V = P * pow(1 + r, n);
                printf("%.0lf\t\t%.2lf\t\t%d\t\t%.2lf\n", P, r, n, V);
            }
        }
    }

    return 0;
}