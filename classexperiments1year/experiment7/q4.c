#include <stdio.h>
#include <string.h>
int main()
{
    union Address 
{
    char name[25];
    char home_address[50];
    char hostel_address[50];
    char city[20];
    char state[20];
    char PIN[10];
}add;
    strcpy(add.name, "Navneet Kumar");
    printf("Name: %s\n", add.name);
    strcpy(add.home_address, "vasundhara apartment");
    printf("Home Address: %s\n", add.home_address);
    strcpy(add.hostel_address, "ivy league");
    printf("Hostel Address: %s\n", add.hostel_address);
    strcpy(add.city, "Dehradun");
    printf("City: %s\n", add.city);
    strcpy(add.state, "Uttrakhand");
    printf("State: %s\n", add.state);
    strcpy(add.PIN, "250667");
    printf("PIN: %s\n", add.PIN);
    return 0;
}