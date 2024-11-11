#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %f\n", bmi);

    if (bmi < 15.0) {
        printf("BMI Category: Starvation\n");
    } else if (15.0 <= bmi && bmi < 17.5) {
        printf("BMI Category: Anorexic\n");
    } else if (17.6 <= bmi && bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (18.5 <= bmi && bmi < 24.9) {
        printf("BMI Category: Normal weight\n");
    } else if (25.0 <= bmi && bmi < 29.9) {
        printf("BMI Category: Overweight\n");
    } else {
        printf("BMI Category: Obesity\n");
    }

    return 0;
}