#include <stdio.h>
int main()
{
    int n;
    printf("Enter the digit (0-9)\n");
    scanf("%d", &n);
    switch (n)
    {
        case 0: printf("%d in words is zero", n);
        break;
        case 1: printf("%d in words is one", n);
        break;
        case 2: printf("%d in words is two", n);
        break;
        case 3: printf("%d in words is three", n);
        break;
        case 4: printf("%d in words is four", n);
        break;
        case 5: printf("%d in words is five", n);
        break;
        case 6: printf("%d in words is six", n);
        break;
        case 7: printf("%d in words is seven", n);
        break;
        case 8: printf("%d in words is eight", n);
        break;
        case 9: printf("%d in words is nine", n);
        break;
        default: printf("Wrong input");
        break;
    }
}