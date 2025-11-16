include <stdio.h>

int main() {
    // A: cost per special attack
    // B: total points Pavan has
    int A, B;

    // Read the two space-separated integers for A and B.
    scanf("%d %d", &A, &B);

    // Calculate the number of attacks.
    // In C, dividing two integers results in an integer,
    // automatically dropping any fractional part.
    // This is exactly what we need.
    int numberOfAttacks = B / A;

    // Print the final result.
    printf("%d
", numberOfAttacks);

    return 0;
}
