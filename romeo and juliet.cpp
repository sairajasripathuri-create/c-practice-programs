#include <stdio.h>

int main() {
    // Declare variables for the number of coins and cost
    int num_5_rupee_coins; // X
    int num_10_rupee_coins; // Y
    int chocolate_cost; // Z
    
    // Read the three integer inputs
    scanf("%d", &num_5_rupee_coins);
    scanf("%d", &num_10_rupee_coins);
    scanf("%d", &chocolate_cost);
    
    // Calculate the total money Romeo has
    int total_money = (num_5_rupee_coins * 5) + (num_10_rupee_coins * 10);
    
    // Calculate the maximum number of chocolates he can buy using integer division
    int max_chocolates = total_money / chocolate_cost;
    
    // Print the final result
    printf("%d
", max_chocolates);
    
    return 0;
}

