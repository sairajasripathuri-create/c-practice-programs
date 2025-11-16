#include <stdio.h>

int main() {
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);

    // Compute the capacity in KB
    int capacityKB = T * S * B;

    // Output the result
    printf("%d KB
", capacityKB);

    return 0;
}

