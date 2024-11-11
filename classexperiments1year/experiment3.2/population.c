#include <stdio.h>

int main() 
{
    float initial_population = 100000;
    float growth_rate = 0.10; 
    int years = 10;

    printf("Year\tPopulation\n");
    printf("---------------------\n");

    for (int year = 1; year <= years; year++) 
    {
        initial_population += initial_population * growth_rate; 
        printf("%d\t%f\n", year, initial_population); 
   }
}