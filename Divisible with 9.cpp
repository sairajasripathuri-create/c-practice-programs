#include <stdio.h>

int main() {
    // num: The input integer
        int num; 

            // 1. Read the single integer input
                if (scanf("%d", &num) != 1) {
                        // Handle potential reading error
                                return 1;
                                    }

                                        // 2. Check for divisibility using the modulo operator
                                            // (num % 9) returns the remainder when num is divided by 9.
                                                // If the remainder is 0, the number is divisible by 9.
                                                    if (num % 9 == 0) {
                                                            printf("True
");
                                                                } 
                                                                    // Otherwise, the number is not divisible by 9.
                                                                        else {
                                                                                printf("False
");
                                                                                    }

                                                                                        return 0;
                                                                                        }
                                                                                        
