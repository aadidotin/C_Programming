#include <stdio.h>

int square (int number);
int _square (int* number);

int main() {
    int a = 10;
    int *ptr_a = &a;

    // printf("%u \n", a);
    // printf("%p \n", &a);
    // printf("%p \n", ptr_a);
    // printf("%u \n", ptr_a);
    // printf("%p \n", &ptr_a);
    // printf("%u \n", &ptr_a);
    
    // int b = 12;
    // int *ptr = &b;
    // int **pptr = &ptr;

    // printf("%d \n", **pptr);
    // printf("%d \n", *pptr);
    // printf("%d \n", pptr);

    int number = 5;

    square(number);
    printf("%d \n", number);

    _square(&number);
    printf("%d \n", number);

    return 0;
}

// Call by value Function 
int square(int number) {
    number = number * number;
    printf("%d \n", number);
}

// Call by Reference Function 
int _square(int* number) {
    *number = (*number) * (*number);
    printf("%d \n", *number);
}