#include <stdio.h>
int main()
{
    int yearGiven = 2001;
    int year;
    printf("Enter the year \n");
    scanf("%d", &year);
    int difference = year-yearGiven;
    int leapyear = difference/4;
    int nonleapyear = difference - leapyear;
    int days = (leapyear*366)+(nonleapyear*365)+1;
    if(days%7==0)
    {
        printf("Sunday");
    }
    if(days%7==1)
    {
        printf("Monday");
    }
    if(days%7==2)
    {
        printf("Tuesday");
    }
    if(days%7==3)
    {
        printf("Wednesday");
    }
    if(days%7==4)
    {
        printf("Thursday");
    }
    if(days%7==5)
    {-
        printf("Friday");
    }
    if(days%7==6)
    {
        printf("Saturday");
    }
    return 0;
}

    
