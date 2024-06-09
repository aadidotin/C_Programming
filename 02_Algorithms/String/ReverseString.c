#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Please Enter Your Name \n");
    gets(str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("You have entered :- %s \n", str);
    printf("The reverse of your input is ");
    for (int i = 0; i <= length; i++)
    {
        printf("%c", str[length - i]);
    }


    return 0;
}