#include <stdio.h>

int main() {
    // Variable to store the day number input
        int day_number;

            // 1. Read the single integer input
                if (scanf("%d", &day_number) != 1) {
                        // Simple error handling for bad input
                                return 1;
                                    }

                                        // 2. Use the if-else if-else ladder to map the number to the day name
                                            if (day_number == 1) {
                                                    printf("Monday
");
                                                        } else if (day_number == 2) {
                                                                printf("Tuesday
");
                                                                    } else if (day_number == 3) {
                                                                            printf("Wednesday
");
                                                                                } else if (day_number == 4) {
                                                                                        printf("Thursday
");
                                                                                            } else if (day_number == 5) {
                                                                                                    printf("Friday
");
                                                                                                        } else if (day_number == 6) {
                                                                                                                printf("Saturday
");
                                                                                                                    } else if (day_number == 7) {
                                                                                                                            printf("Sunday
");
                                                                                                                                } 
                                                                                                                                    // 3. The final 'else' handles any input not between 1 and 7
                                                                                                                                        else {
                                                                                                                                                printf("Invalid input
");
                                                                                                                                                    }

                                                                                                                                                        return 0;
                                                                                                                                                        }
                                                                                                                                                        
