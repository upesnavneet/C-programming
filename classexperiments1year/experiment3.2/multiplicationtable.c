#include <stdio.h>
int main()
{
    int n;
    int p = 1;

    printf("Enter the number of which the table you want");
    scanf("%d", &n);

    for(int i=1; i<=10; i=i+1)
    {
        p = n*i;
        printf("%d x %d = %d \n", n, i, p);
    }
}