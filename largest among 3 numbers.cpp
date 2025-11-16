#include <stdio.h>

int main() {
    // Variables for the three input numbers
        int num1, num2, num3;

            // 1. Read the three space-separated integer inputs
                if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
                        // Handle input error
                                return 1;
                                    }

                                        // --- Logic to Find the Largest Number ---

                                            // 1. Check if num1 is the largest
                                                // num1 is largest if it is greater than BOTH num2 AND num3
                                                    if (num1 >= num2 && num1 >= num3) {
                                                            printf("%d
", num1);
                                                                } 
                                                                    // 2. If num1 wasn't the largest, check if num2 is the largest
                                                                        // num2 is largest if it is greater than or equal to num3
                                                                            // (We already know it's > num1 because the first if failed)
                                                                                else if (num2 >= num3) {
                                                                                        printf("%d
", num2);
                                                                                            } 
                                                                                                // 3. If neither num1 nor num2 was the largest, num3 must be the largest
                                                                                                    else {
                                                                                                            printf("%d
", num3);
                                                                                                                }

                                                                                                                    return 0;
                                                                                                                    }
                                                                                                                    
