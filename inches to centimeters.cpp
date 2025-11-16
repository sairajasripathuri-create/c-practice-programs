 <stdio.h>

int main() {
    int height_in_inches;
    scanf("%d", &height_in_inches);

    // Conversion factor: 1 inch = 2.54 cm
    double height_in_cm = height_in_inches * 2.54;

    // Print result rounded to 2 decimal places
    printf("%.2f
", height_in_cm);

    return 0;
}



