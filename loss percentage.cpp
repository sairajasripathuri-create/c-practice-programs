#include <stdio.h>

int main() {
    double CP, SP, lossPercent;

    // Input: CP and SP
    scanf("%lf %lf", &CP, &SP);

    // Calculate loss percentage
    lossPercent = ((CP - SP) / CP) * 100;

    // Output with 2 decimal places
    printf("%.2lf
", lossPercent);

    return 0;
}

