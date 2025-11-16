#include <stdio.h>

int main() {
    int Average, W1, W2;

    // Read input values: Average, W1, W2
    scanf("%d %d %d", &Average, &W1, &W2);

    // Calculate total weight of all three boys
    int total_weight = Average * 3;

    // Calculate the weight of the third boy
    int W3 = total_weight - W1 - W2;

    // Print the weight of the third boy
    printf("%d
", W3);

    return 0;
}

