#include<stdio.h>
int main()
{
    printf("hello world");
    char name[10];
    int age;
    printf("Enter name");
    scanf("%s", &name);
    printf("Enter age");
    scanf("%d", &age);
    printf("my name is %s and my age is %d", name,age);
}