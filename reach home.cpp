#include <stdio.h>

int main() {
    int X, Y;

        // Input
            scanf("%d %d", &X, &Y);

                // Pavan can travel 5 km per litre
                    int maxDistance = X * 5;

                        // Check if he can reach home
                            if (maxDistance >= Y)
                                    printf("YES
");
                                        else
                                                printf("NO
");

                                                    return 0;
                                                    }
