#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elememts in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i=i+1)
    {
        printf("enter the number for pos %d: \n", i);
        scanf("%d", &arr[i]);
    }

    int cp = 0, cn = 0, e = 0, o = 0;

    for(int i = 0; i<=n; i=i+1)
    {
        if(arr[i]>0)
        {
            cp++;
        }
        else if(arr[i]<0)
        {
            cn++;
        }
    }

    
    for(int i = 0; i<=n; i=i+1)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
    else
        {
            o++;
        }
    }
    printf("Number of positive numbers: %d \n", cp);
    printf("Number of negative numbers: %d \n", cn);
    printf("Number of even numbers: %d \n", e);
    printf("Number of odd numbers: %d \n-", cp);

    
}