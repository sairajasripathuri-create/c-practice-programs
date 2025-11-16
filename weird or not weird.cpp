#include <stdio.h>

int main() {
    // Declare an integer variable to store the input 'n'
        int n;

            // Read the single integer input from the user
                // The problem states the input is a single positive integer.
                    if (scanf("%d", &n) != 1) {
                            // Simple error handling for bad input (optional, but good practice)
                                    return 1; 
                                        }

                                            // --- Conditional Logic Implementation ---

                                                // 1. Check if n is ODD (n % 2 != 0)
                                                    if (n % 2 != 0) {
                                                            printf("weird
");
                                                                } 
                                                                    // Now, we only handle cases where n is EVEN (n % 2 == 0)
                                                                        else { 
                                                                                // 2. Check if n is EVEN and in the range [2, 5]
                                                                                        // Note: The 'else' ensures we only hit this if it's already even.
                                                                                                if (n >= 2 && n <= 5) {
                                                                                                            printf("not weird
");
                                                                                                                    } 
                                                                                                                            // 3. Check if n is EVEN and in the range [6, 20]
                                                                                                                                    else if (n >= 6 && n <= 20) {
                                                                                                                                                printf("weird
");
                                                                                                                                                        } 
                                                                                                                                                                // 4. All other EVEN cases (must be greater than 20, as n > 0)
                                                                                                                                                                        // If n is even and not in [2, 5] and not in [6, 20], it must be > 20.
                                                                                                                                                                                else { // This covers n > 20
                                                                                                                                                                                            printf("not weird
");
                                                                                                                                                                                                    }
                                                                                                                                                                                                        }

                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            
