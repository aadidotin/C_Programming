#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a == b)
    {
        printf("Both a and b are same \n");
    }
    else if (a > b)
    {
        printf("a is greater then b \n");
    }
    else
    {
        printf("a is less then b \n");
    }

    if ((a + b) == c)
    {
        printf("The sum of a and b = c \n");
    }
    else
    {
        printf("The sum of a and b != c \n");
    }

    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }

    return 0;
}