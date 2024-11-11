#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i=i+1)
    {
        printf("Enter the number for position %d: \n", i);
        scanf("%d", &arr[i]);
    }
    
    int num;
    int c = 0;
    printf("Enter the number to find the frequency of: \n"); 
    scanf("%d", &num);
    
    for(int i = 0; i < n; i=i+1)
    {
        if(arr[i]==num)
        {
            c = c+1;
        }
    }

    printf("Therefore the frequency of the %d in the list is: %d", num, c);

}