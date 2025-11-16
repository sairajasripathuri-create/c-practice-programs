#include <stdio.h>

int main() {
    // Declare variables to store total minutes, hours, and remaining minutes
    int totalMinutes, hours, remainingMinutes;

    // Read the total number of minutes from the user
    scanf("%d", &totalMinutes);

    // Calculate the number of hours using integer division
    // There are 60 minutes in an hour
    hours = totalMinutes / 60;

    // Calculate the remaining minutes using the modulo operator
    remainingMinutes = totalMinutes % 60;

    // Print the result in the specified format
    printf("%d Hour(s) %d Minute(s)
", hours, remainingMinutes);

    return 0;
}

