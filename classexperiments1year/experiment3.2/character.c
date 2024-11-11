#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character you want: \n");
    scanf("%c", &ch);
    if(ch>'0' && ch<'9')
    {
        printf("Character %c is a digit", ch);
    }
    else if(ch>= 'a' && ch<= 'z' || ch>= 'A' && ch<= 'Z')
    {
        printf("Character %c is an alphabet \n", ch);
    }
    else
    {
        printf("Character %c is a special character \n", ch);
    }
}