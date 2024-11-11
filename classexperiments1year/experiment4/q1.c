#include <stdio.h>
int main()
{
int population = 100000;
for (int year = 1; year <= 10; year++) 
{
    population = population + population * 0.1;
    printf("Population at the end of year %d: %d\n", year, population);
}
}