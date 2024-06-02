#include <stdio.h>

int find_factorial(int number);

int main()
{
    int a;

    printf("Enter a number to find it's Factorial = ");
    scanf("%d", &a);

    printf("\n\nThe Factorial of %d is %d", a, find_factorial(a));

    return 0;
}

int find_factorial(int num)
{
    if (num == 1)
        return 1;

    int newVal = find_factorial(num - 1);
    int result = newVal * num;
    return result;
}
