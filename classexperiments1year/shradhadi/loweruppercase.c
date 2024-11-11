#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
    {
        printf("Character %c is in lowercase", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Character %c is in uppercase", ch);
    }
    else{
        printf("Wrong input");
    }
}