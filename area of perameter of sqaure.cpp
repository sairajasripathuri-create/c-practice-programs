include <stdio.h>

int main() {
    int side, area, perimeter;

    // Input: side of the square
    scanf("%d", &side);

    // Calculate area and perimeter
    area = side * side;
    perimeter = 4 * side;

    // Output: area and perimeter
    printf("%d %d
", area, perimeter);

    return 0;
}

