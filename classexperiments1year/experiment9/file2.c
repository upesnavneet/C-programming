#include <stdio.h>
int main() 
{
    FILE *file;

    file = fopen("newfile.txt", "r");

    if (file == NULL) 
    {
        printf("Error opening file");
    }
    else
    {

    int ch;

    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }

    fclose(file);
    
    return 0;
    }
}