#include <stdio.h>

int ISPRIME(int num) 
{
    if (num <= 1) 
    {
        return 0;
    } 
    else if (num <= 3) 
    {
        return 1;
    } 
    else if (num % 2 == 0 || num % 3 == 0) 
    {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) 
    {
        if (num % i == 0 || num % (i + 2) == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
 {
    int start, end;

    printf("Enter starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) 
    {
        if (ISPRIME(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}