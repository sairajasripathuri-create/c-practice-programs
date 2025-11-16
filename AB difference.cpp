#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int A, B;
        int sum, product, difference;

            // Input
                scanf("%d %d", &A, &B);

                    // Correct answer should be A + B
                        sum = A + B;

                            // Vijay's wrong output is A * B
                                product = A * B;

                                    // Find absolute difference
                                        difference = abs(sum - product);

                                            // Output
                                                printf("%d
", difference);

                                                    return 0;
                                                    }
