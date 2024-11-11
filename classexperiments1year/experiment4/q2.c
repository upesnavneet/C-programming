#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
int largest = arr[0];
    int s_l = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            s_l = largest;
            largest = arr[i];
        } else if (arr[i] > s_l && arr[i] != largest) 
        {
            s_l = arr[i]; 

        }
    }

}