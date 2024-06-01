#include <stdio.h>

void main()
{
    // For Loop
    for (int i = 0; i < 4; i++)
    {
        printf("Hello %d Times \n", (i + 1));
    }

    // While Loop
    int a = 1;

    while (a <= 10)
    {
        printf("Hello World ! %d \n", a);
        a++;

        
        if (a == 4) {
            continue;
        }
        else if (a == 9) {
            break;
        }
    }

    // Do-While Loop
    // int b = 1;

    // do
    // {
    //     printf("Hello World !!! %d \n", b);
    //     b++;
    // } while (b <= 10);
}