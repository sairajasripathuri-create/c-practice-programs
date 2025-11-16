include <stdio.h>

int main() {
    double cp, sp, profit_percent;

    // Input cost price and selling price
    scanf("%lf %lf", &cp, &sp);

    // Calculate profit percentage
    profit_percent = ((sp - cp) / cp) * 100;

    // Print with 2 decimal places
    printf("%.2lf
", profit_percent);

    return 0;
}

