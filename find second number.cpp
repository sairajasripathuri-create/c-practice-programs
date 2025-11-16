include <stdio.h>

int main() {
    // X is the average of two numbers.
    // Y is the first number.
    int X, Y;

    // Read the space-separated values for X and Y from the user.
    scanf("%d %d", &X, &Y);

    // Calculate the second number using the derived formula.
    int second_number = (2 * X) - Y;

    // Print the result.
    printf("%d
", second_number);

    return 0;
