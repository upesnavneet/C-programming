#include <stdio.h>

int main() 
{
    int on, num, sum, r;

    printf("Enter a three digit number: ");
    scanf("%d", &on);

    num = on;
    sum = 0;

    if(num>=100 && num<=999)
    {

    r = num % 10;
    sum = sum + (r*r*r);
    num = num / 10;

    r = num % 10;
    sum = sum + (r*r*r);
    num = num / 10;

    r = num % 10;
    sum = sum + (r*r*r);

    if(sum==on)
    {
        printf("The number %d is an armstrong number", on);
    }
    else
    {
        printf("The number %d is not an armstrong number", on);
    }

    }
    else
    {
        printf("Wrong input");
    }







}