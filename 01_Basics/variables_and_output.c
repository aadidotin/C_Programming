#include <stdio.h>

// using another Header for Boolen Values
#include <stdbool.h>

int main()
{
    int a = 1;
    float b = 2.1;
    double b_b = 21.99;
    char c = 'A';
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 10, y = 20, z = 30;
    const int const_var = 15;  // This is a constant variable which can not be updated
    bool todayIsWeekend = true;
    bool todayIsMonday = false;

    // printf("%d \n", arr[1]);
    // printf("This is the sum of X, Y and Z %d \n", x + y + z);

    // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}