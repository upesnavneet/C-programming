#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse(char str[])
{

    int l = strlen(str);
    char cstr[100];

    for(int i=0; i<l; i++)
    {
        cstr[i]=str[i];
    }

    int len = strlen(cstr);

    for(int i=0; i < len/2; i++)
    {
        char ch = cstr[i];
        cstr[i] = cstr[len-i-1];
        cstr[len-i-1] = ch;
    }
    
    printf("The reverse of the string is: %s", cstr);
}

void main()
{
    char str[100],cstr[100];
    char ch;
    int i;

    printf("Enter the string \n");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    reverse(str);
}