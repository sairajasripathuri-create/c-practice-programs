#include <stdio.h>

int main() {
    // Variable to store units consumed
        int units;
            
                // Variables for calculations, using 'double' for precision
                    double base_charge = 0.0;
                        double total_bill = 0.0;
                            double surcharge_amount = 0.0;
                                
                                    // 1. Read the units consumed
                                        if (scanf("%d", &units) != 1) {
                                                // Handle input error
                                                        return 1;
                                                            }

                                                                // --- 2. Calculate Base Charge based on Unit Slabs ---
                                                                    
                                                                        if (units <= 199) {
                                                                                // Upto 199 @ 1.20
                                                                                        base_charge = units * 1.20;
                                                                                            } 
                                                                                                else if (units < 400) {
                                                                                                        // 200 and above but less than 400 @ 1.50
                                                                                                                base_charge = units * 1.50;
                                                                                                                    } 
                                                                                                                        else if (units < 600) {
                                                                                                                                // 400 and above but less than 600 @ 1.80
                                                                                                                                        base_charge = units * 1.80;
                                                                                                                                            } 
                                                                                                                                                else { // units >= 600
                                                                                                                                                        // 600 and above @ 2.00
                                                                                                                                                                base_charge = units * 2.00;
                                                                                                                                                                    }
                                                                                                                                                                        
                                                                                                                                                                            // --- 3. Calculate Surcharge based on Base Charge ---
                                                                                                                                                                                
                                                                                                                                                                                    if (base_charge > 400.0) {
                                                                                                                                                                                            // If the base charge exceeds Rs. 400, a surcharge of 15% is charged.
                                                                                                                                                                                                    surcharge_amount = base_charge * 0.15; // 15% of base_charge
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                // If the base charge is less than or equal to Rs. 400, a minimum 
                                                                                                                                                                                                                        // surcharge amount should be Rs. 100/-.
                                                                                                                                                                                                                                surcharge_amount = 100.0;
                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                        // --- 4. Calculate Total Bill ---
                                                                                                                                                                                                                                            // Total Bill = Base Charge + Surcharge
                                                                                                                                                                                                                                                total_bill = base_charge + surcharge_amount;

                                                                                                                                                                                                                                                    // 5. Print the result formatted to two decimal places
                                                                                                                                                                                                                                                        printf("%.2f
", total_bill);

                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            
