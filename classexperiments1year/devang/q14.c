#include <stdio.h> 

#include <string.h> 

int main() { 
char name[50]; 
int units; 
float total = 0, surcharge = 0; 
printf("Enter the name of the user: "); 
fgets(name, sizeof(name), stdin); 
printf("Enter the number of units consumed: "); 
scanf("%d", &units); 
if (units <= 200)  
{ 
total = units * 0.80; 
} else if (units <= 300)  
{ 
 total = (200 * 0.80) + ((units - 200) * 0.90); 
} else  
{ 
total = (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.00); 
} 
total += 100; 
if (total > 400)  
{ 
surcharge = total * 0.15; 
total += surcharge; 
} 
printf("\nName of the user: %s", name); 
printf("Units consumed: %d\n", units); 
printf("Total charges: Rs. %.2f\n", total); 
return 0; 

} 