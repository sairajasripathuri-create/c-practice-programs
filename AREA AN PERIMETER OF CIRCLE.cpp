
int main() {
    int radius;
    float area, perimeter;
    float pi = 3.14;

    // Input
    scanf("%d", &radius);

    // Calculations
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    // Output (2 decimal places)
    printf("%.2f
", area);
    printf("%.2f
", perimeter);

    return 0;
}

