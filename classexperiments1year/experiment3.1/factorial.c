#include<stdio.h>
int main()
{
   int n, a = 1;
   printf("Enter the value of N");
   scanf("%d", &n);
   for(int i=1;i<=n;i=i+1)
   {
    a=a*i;
   }
  printf("the factorial of %d is %d",n,a);
}