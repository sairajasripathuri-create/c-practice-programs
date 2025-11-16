#include <stdio.h>

int main() {
    int x;

    // Read the body temperature
    scanf("%d", &x);

    // Check if Pavan has a fever
    if (x > 98)
        printf("YES");
    else
        printf("NO");

    return 0;
}

