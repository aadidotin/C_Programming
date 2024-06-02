#include <stdio.h>

// Defining Recurssion Function
void recurFunction(int a, int b);

int main()
{

    // Calling Recurssion function
    // recurFunction(<From Value>, <To Value>);
    recurFunction(5, 9);

    // Calling Factorial Function
    printf("Final is %d \n", factorial(50));

    // Calling FibonacciSequence Function
    printf("Final Output is :- %d \n", fibonacciSquence(19));

    return 0;
}

// Writing Logic For Recurssion Function
void recurFunction(int a, int b)
{
    printf("Hello World !!! %d \n", a);
    if (a == b)
    {
    }
    else
    {
        a += 1;
        recurFunction(a, b);
    }
};

int factorial(int num)
{
    if (num == 1)
        return 1;

    int newVal = factorial(num - 1);
    int result = newVal * num;
    return result;

    // With Looping
    /*
    int result = 1;
    for (int i = num; i > 1; i--)
    {
        result *= i;
    }
    printf("%d \n", result);
    */
}

// Writing Logic for Fibonacci Squence Function
int fibonacciSquence(int index)
{
    if (index == 0 || index == 1)
        return index;

    int fib1 = fibonacciSquence(index - 1);
    int fib2 = fibonacciSquence(index - 2);

    int finalFib = fib1 + fib2;
    return finalFib;
}
