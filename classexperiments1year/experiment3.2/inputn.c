#include <stdio.h>
int main()
{
    int n;
    int rn;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    printf("enter the number of inputs you want");
    scanf("%d", &n);

    for (int i = 1; i<=n; i=i+1)
    {
        printf("Enter the number \n");
        scanf("%d", &rn);
        if(rn > 0)
        {
            c1 = c1 + 1;
        }
        else if(rn < 0)
        {
            c2 = c2 + 1;
        }
        else
        {
            c3 = c3+1;
        }
    }

    printf("No. of positive numbers : %d \n", c1);
    printf("No. of negative numbers : %d \n", c2);
    printf("No. of zeroes : %d \n", c3);
}