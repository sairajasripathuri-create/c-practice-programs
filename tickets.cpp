#include <stdio.h>

int main() {
    int X, totalCost;

        // Input
            scanf("%d", &X);

                // Total cost for 4 friends
                    totalCost = 4 * X;

                        // Check if total cost is within 1000
                            if (totalCost <= 1000)
                                    printf("YES
");
                                        else
                                                printf("NO
");

                                                    return 0;
                                                    }
