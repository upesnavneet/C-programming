#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Enter the value of a of the equation");
    scanf("%d", &a);
    printf("Enter the value of b of the equation");
    scanf("%d", &b);
    printf("Enter the value of c of the equation");
    scanf("%d", &c);

    d = (b*b)-4*a*c;
    if(d>0)
    {
        printf("Roots are rea \n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b + sqrt(d)) / (2 * a);
        printf("The roots of the equation are %d and %d \n", r1, r2);
   }
   else if(d==0)
   {
    r1 = r2 = -b / (2 * a);
    printf("The roots of the equation is %d and %d \n", r1, r2);
   }
   else
   {
    printf("Roots are imaginary \n");
   }



}