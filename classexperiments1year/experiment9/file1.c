#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;

    char filename[] = "newfile.txt";
    char text[100];

    printf("Enter the contents of the file: \n");

    fgets(text, sizeof(text), stdin);

    file = fopen(filename, "w");

    if (file == NULL) 
    {

        printf("Error: Could not open file %s for writing.\n", filename);
    }

    fprintf(file, "%s", text);

    fclose(file);


    printf("Text written to file %s successfully.\n", filename);

    return 0;
}