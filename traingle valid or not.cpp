#include <stdio.h>

int main() {
    // Declare variables for the three sides of the triangle
        int a, b, c;

            // 1. Read the three space-separated integer inputs (sides a, b, c)
                if (scanf("%d %d %d", &a, &b, &c) != 3) {
                        // Handle input error if 3 integers are not read
                                return 1;
                                    }

                                        // --- Triangle Validity Check ---
                                            // A triangle is valid if the sum of any two sides is greater than the third side.
                                                // All three conditions must be TRUE for the triangle to be valid.
                                                    
                                                        // Condition 1: a + b > c
                                                            int condition1 = (a + b > c);
                                                                
                                                                    // Condition 2: a + c > b
                                                                        int condition2 = (a + c > b);
                                                                            
                                                                                // Condition 3: b + c > a
                                                                                    int condition3 = (b + c > a);

                                                                                        // Check if all conditions are met using the logical AND operator (&&)
                                                                                            if (condition1 && condition2 && condition3) {
                                                                                                    printf("Valid triangle
");
                                                                                                        } else {
                                                                                                                printf("Invalid triangle
");
                                                                                                                    }

                                                                                                                        return 0;
                                                                                                                        }
                                                                                                                        
