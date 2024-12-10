#include <stdio.h>

int main() 
{
    FILE *file;
    char buffer[256];
    
    file = fopen("newfile.txt", "r");

    if (file == NULL) 
    {
        printf("Error opening file");
    }

    else
    {

    while (fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        printf("%s", buffer);
    }

    fclose(file);
    
    return 0;
    }
}