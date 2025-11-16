#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    // Calculate remaining capacity for mangoes
    int remainingWeight = Z - Y;

    // Calculate max number of mangoes
    int maxMangoes = remainingWeight / X;

    printf("%d
", maxMangoes);

    return 0;
}

