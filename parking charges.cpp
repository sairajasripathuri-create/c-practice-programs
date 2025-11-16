#include <stdio.h>

int main() {
    int X, Y, H, total;

        // Input
            scanf("%d %d %d", &X, &Y, &H);

                // If parking is for 1 hour, only X is charged
                    if (H <= 1)
                            total = X;
                                else
                                        total = X + (H - 1) * Y;  // First hour costs X, rest cost Y each

                                            // Output
                                                printf("%d
", total);

                                                    return 0;
                                                    }
