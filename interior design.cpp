#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2;

    // Read the four space-separated integers
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

    // Calculate total cost for each style
    int total1 = X1 + Y1;
    int total2 = X2 + Y2;

    // Print the minimum total cost
    if (total1 < total2)
        printf("%d", total1);
    else
        printf("%d", total2);

    return 0;
}

