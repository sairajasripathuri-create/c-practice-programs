#include <stdio.h>

int main() {
    int base, height;
    
    // Read base and height from user
    scanf("%d %d", &base, &height);
    
    // Calculate area (integer division is fine here because input and output are integers)
    int area = (base * height) / 2;
    
    // Print the result
    printf("%d
", area);
    
    return 0;
}

