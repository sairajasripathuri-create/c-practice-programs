#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Get last two digits
    int lastTwoDigits = year % 100;

    // Print with leading zero if needed
    printf("%02d
", lastTwoDigits);

    return 0;
}

