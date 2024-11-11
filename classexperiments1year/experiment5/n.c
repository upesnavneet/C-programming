#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i=i+1)
    {
        printf("Enter the number for pos %d", i);
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max1 = arr[i];
        }
    }
}
