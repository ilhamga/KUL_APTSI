#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    int yearOfBirth;
    scanf("%d", &yearOfBirth);
    int age = year - yearOfBirth;

    char nama[10];
    scanf("%s", nama);
    printf("\n\nHi I am %s, and this is year %d I am %d years old", nama, year, age);
    return 0;
}