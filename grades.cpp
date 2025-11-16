#include <stdio.h>

int main() {
    // Variables for the five subject marks
        int physics, chemistry, biology, mathematics, computer_science;
            
                // Variable to hold the total marks
                    int total_marks;
                        
                            // Variable to hold the percentage (must be a float/double for accuracy)
                                float percentage;
                                    
                                        // Total possible marks is 5 subjects * 100 marks = 500
                                            const int MAX_MARKS = 500;

                                                // 1. Read the five space-separated integer inputs
                                                    if (scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer_science) != 5) {
                                                            // Handle input error
                                                                    return 1;
                                                                        }

                                                                            // 2. Calculate the total marks
                                                                                total_marks = physics + chemistry + biology + mathematics + computer_science;

                                                                                    // 3. Calculate the percentage
                                                                                        // We cast total_marks to float before division to ensure floating-point arithmetic.
                                                                                            percentage = ((float)total_marks / MAX_MARKS) * 100.0;

                                                                                                // 4. Assign the grade using conditional statements, starting from the highest percentage
                                                                                                    if (percentage >= 90.0) {
                                                                                                            printf("Grade A
");
                                                                                                                } 
                                                                                                                    else if (percentage >= 80.0) {
                                                                                                                            printf("Grade B
");
                                                                                                                                } 
                                                                                                                                    else if (percentage >= 70.0) {
                                                                                                                                            printf("Grade C
");
                                                                                                                                                } 
                                                                                                                                                    else if (percentage >= 60.0) {
                                                                                                                                                            printf("Grade D
");
                                                                                                                                                                } 
                                                                                                                                                                    else if (percentage >= 40.0) {
                                                                                                                                                                            printf("Grade E
");
                                                                                                                                                                                } 
                                                                                                                                                                                    // 5. If none of the above are true, the percentage must be < 40%
                                                                                                                                                                                        else { 
                                                                                                                                                                                                printf("Grade F
");
                                                                                                                                                                                                    }

                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        
