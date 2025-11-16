#include <stdio.h>

int main() {
    // X: Qualify points, A: Easy problems, B: Hard problems
        int X, A, B; 

            // 1. Read the three space-separated integers
                if (scanf("%d %d %d", &X, &A, &B) != 3) {
                        // Handle potential reading error
                                return 1;
                                    }

                                        // 2. Calculate the total score
                                            // Easy problems are worth 1 point (A * 1)
                                                // Hard problems are worth 2 points (B * 2)
                                                    int total_score = (A * 1) + (B * 2);

                                                        // 3. Compare the total score with the qualifying points (X)
                                                            // The professor qualifies if the total_score is GREATER THAN OR EQUAL TO X.
                                                                if (total_score >= X) {
                                                                        printf("Qualify
");
                                                                            } else {
                                                                                    printf("Not Qualify
");
                                                                                        }

                                                                                            return 0;
                                                                                            }
                                                                                            
