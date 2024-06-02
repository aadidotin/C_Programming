#include <stdio.h>

int fibonacciSequence(int index);

int main()
{
    int a;

    printf("Enter a number to it's Fibonacci Sequence = ");
    scanf("%d", &a);

    // Calling FibonacciSequence Function
    printf("The Fibonacci Sequence for %dth position is :- %d \n", a, fibonacciSequence(a));

    return 0;
}

// Writing Logic for Fibonacci Squence Function
int fibonacciSequence(int index)
{
    if (index == 0 || index == 1)
        return index;

    int fib1 = fibonacciSequence(index - 1);
    int fib2 = fibonacciSequence(index - 2);

    int finalFib = fib1 + fib2;
    return finalFib;
}
