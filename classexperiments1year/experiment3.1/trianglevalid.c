#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st side of the triange \n");
    scanf("%d", &a);
    printf("enter 2nd side of the triangle \n");
    scanf("%d", &b);
    printf("Enter 3rd side of the triangle \n");
    scanf("%d", &c);

    if (a<=0 || b<=0 || c<=0)
    {
        printf("triangle is not valid");
    }
    else
    {
    if(a<b+c && b<a+c && c<a+b)
    {
        printf("triangle is possible \n");
    }

    if(a==b && b==c)
    {
        printf("triangle is equilateral \n");
    }
    else if(a==b || a==c || b==a || b==c || c==a || c==b) 
    {
        printf("triangle is isoceles");
    }
    else if((a^2)==(b^2)+(c^2) || (b^2)==(a^2)+(c^2) || (c^2)==(a^2)+(b^2))
    {
        printf("triangle is right angled \n");
    }
    else if(a!=b || b!=c )
    {
        printf("Triangle is scalene \n");
    }
    return 0;

}
}
    