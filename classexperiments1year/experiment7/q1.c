#include <stdio.h>
struct Complex 
{
    double real;
    double imag;
};

struct Complex readComplex() 
{
    struct Complex num;
    printf("Enter real part: ");
    scanf("%lf", &num.real);
    printf("Enter imaginary part: ");
    scanf("%lf", &num.imag);
    return num;
}

void writeComplex(struct Complex num)
{
    printf("%.2lf + %.2lfi\n", num.real, num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) 
{
    struct Complex result;
    result.real = num1.real + num2.real; 

    result.imag = num1.imag + num2.imag;
    return result; 

}

struct Complex subtractComplex(struct Complex num1, struct Complex num2) 
{
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result; 

}

int main() 
{
struct Complex
 num1, num2, sum, difference;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2); 

    difference = subtractComplex(num1, num2);

    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(difference);

    return 0;
}