#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter length");
    scanf("%d", &l);
    printf("Enter breadth");
    scanf("%d", &b);
    int area = l*b;
    int perimeter = 2*(l+b);
    printf("area : %d \n", area);
    printf("perimeter : %d \n", perimeter);
    return 0;

}
