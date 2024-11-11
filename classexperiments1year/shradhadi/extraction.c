#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int r;
    printf("Enter a three digit number: ");
    scanf("%d", &n);

    int on = n;

    for(int i = 1; i<=3; i=i+1)
    {
        r = on%10;
        sum = r;
        on = on/10;
        printf("%d \n", sum);
    }

}