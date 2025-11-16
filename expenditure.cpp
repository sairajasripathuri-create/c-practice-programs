#include <stdio.h>

int main() {
    // X: Total money Akshat has (available funds)
        // Y: Daily expenditure
            int X, Y; 

                // 1. Read the available money (X) from the first line
                    if (scanf("%d", &X) != 1) {
                            return 1;
                                }

                                    // 2. Read the daily expenditure (Y) from the second line
                                        if (scanf("%d", &Y) != 1) {
                                                return 1;
                                                    }

                                                        // The current month is stated to have 30 days.
                                                            const int DAYS_IN_MONTH = 30;

                                                                // 3. Calculate the total required expenditure for the month
                                                                    int total_required_expenditure = Y * DAYS_IN_MONTH; 

                                                                        // 4. Compare the available money (X) with the required expenditure
                                                                            // Akshat has enough money if X is greater than or equal to the total required.
                                                                                if (X >= total_required_expenditure) {
                                                                                        printf("YES
");
                                                                                            } else {
                                                                                                    printf("NO
");
                                                                                                        }

                                                                                                            return 0;
                                                                                                            }
                                                                                                            
