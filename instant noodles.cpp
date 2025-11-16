#include <stdio.h>

int main() {
    // X represents the number of stoves.
    // Y represents the number of minutes.
    int X, Y;

    // Read the two space-separated integers for X and Y.
    scanf("%d %d", &X, &Y);

    // Calculate the total number of customers that can be served.
    int total_customers = X * Y;

    // Print the final result.
    printf("%d
", total_customers);

    return 0;

