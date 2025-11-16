#include <stdio.h>

int main() {
    int speed_kmph;
    scanf("%d", &speed_kmph);

    // Convert km/h to m/s
    float speed_mps = (speed_kmph * 1000.0) / 3600.0;

    // Print with 2 decimal places
    printf("%.2f
", speed_mps);

    return 0;
}

