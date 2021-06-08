#include <stdio.h>
int leap(int);

int main()
{
    int yr;
    printf("Enter year to check whether leap or not: ");
    scanf("%d", &yr);
    printf(leap(yr));
}

int leap(int year)
{
    if (year % 4 == 0)
        printf("It is a leap year");

    else
        printf("It's NOT a leap year");
}