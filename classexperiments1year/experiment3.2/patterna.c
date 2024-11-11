#include <stdio.h>

int main()
{
    int num =1;
    for(int i = 1; i<=3; i=i+1)
    {
        for(int j = 1; j<=3-i; j=j+1)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j=j+1)
        {
            printf("%d ", num);
            num++;

        }
        
        printf("\n");
    }
}