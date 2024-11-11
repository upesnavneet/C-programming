#include <stdio.h> 

int main()  

{ 
int sum = 0, count = 0; 
for (int i = 0; i <= 100; i++)  
{ 
 if (i % 6 == 0 && i % 4 != 0)  
 { 
 sum += i; 
 count++; 
} 
} 
 printf("Sum of integers divisible by 6 but not by 4: %d\n", sum); 
 printf("Total count of such integers: %d\n", count); 
 return 0; 

} 