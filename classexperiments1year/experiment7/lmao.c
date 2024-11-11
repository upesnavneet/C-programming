#include <stdio.h>
#include <string.h>

// Define the maximum length for the strings
#define MAX_LENGTH 100

// Define the union
union AddressInfo {
    char name[MAX_LENGTH];
    char home_address[MAX_LENGTH];
    char hostel_address[MAX_LENGTH];
    char city[MAX_LENGTH];
    char state[MAX_LENGTH];
    char zip[MAX_LENGTH];
};

int main() {
    union AddressInfo address;

    printf("Enter Name: ");
    fgets(address.name, MAX_LENGTH, stdin);
    
    address.name[strcspn(address.name, "\n")] = '\0';
    printf("Name: %s\n", address.name);


    printf("Enter Home Address: ");
    fgets(address.home_address, MAX_LENGTH, stdin);
    address.home_address[strcspn(address.home_address, "\n")] = '\0';
    printf("Home Address: %s\n", address.home_address);


    printf("Enter City: ");
    fgets(address.city, MAX_LENGTH, stdin);
    address.city[strcspn(address.city, "\n")] = '\0';
    printf("City: %s\n", address.city);

    printf("Enter State: ");
    fgets(address.state, MAX_LENGTH, stdin);
    address.state[strcspn(address.state, "\n")] = '\0';
    printf("State: %s\n", address.state);

    printf("Enter ZIP: ");
    fgets(address.zip, MAX_LENGTH, stdin);
    address.zip[strcspn(address.zip, "\n")] = '\0';

    printf("home address: %s\n", address.home_address);

    return 0;
}