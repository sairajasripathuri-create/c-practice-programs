#include <stdio.h>

int main() {
    // Variables for the three sides of the triangle
        int s1, s2, s3;

            // 1. Read the three space-separated integer inputs
                if (scanf("%d %d %d", &s1, &s2, &s3) != 3) {
                        // Simple error handling
                                return 1;
                                    }

                                        // --- Triangle Classification Logic ---

                                            // 1. Check for Equilateral: All three sides are equal (S1 = S2 = S3)
                                                if (s1 == s2 && s2 == s3) {
                                                        printf("Equilateral triangle
");
                                                            } 
                                                                // 2. Check for Isosceles: At least two sides are equal
                                                                    // Note: If a triangle is Equilateral, it is also technically Isosceles,
                                                                        // but in competitive programming, we typically output the most specific type.
                                                                            // By using 'else if', we ensure this is only checked if it wasn't Equilateral.
                                                                                else if (s1 == s2 || s1 == s3 || s2 == s3) {
                                                                                        printf("Isosceles triangle
");
                                                                                            } 
                                                                                                // 3. Check for Scalene: If it's not Equilateral AND not Isosceles, 
                                                                                                    // then none of the sides are equal.
                                                                                                        else {
                                                                                                                printf("Scalene triangle
");
                                                                                                                    }

                                                                                                                        return 0;
                                                                                                                        }
                                                                                                                        
