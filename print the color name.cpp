#include <stdio.h>
#include <ctype.h> // Required for the toupper() function

int main() {
    // Declare a variable to store the single character input
        char color_code_input;
            
                // 1. Read the single character input
                    if (scanf(" %c", &color_code_input) != 1) {
                            // Simple error handling
                                    return 1;
                                        }
                                            
                                                // 2. Convert the input character to its uppercase equivalent
                                                    // This handles the case-insensitive constraint (V or v becomes 'V')
                                                        char code = toupper(color_code_input);
                                                            
                                                                // 3. Use a switch statement to check the code and print the color name
                                                                    switch (code) {
                                                                            case 'V':
                                                                                        printf("Violet
");
                                                                                                    break;
                                                                                                            case 'I':
                                                                                                                        printf("Indigo
");
                                                                                                                                    break;
                                                                                                                                            case 'B':
                                                                                                                                                        printf("Blue
");
                                                                                                                                                                    break;
                                                                                                                                                                            case 'G':
                                                                                                                                                                                        printf("Green
");
                                                                                                                                                                                                    break;
                                                                                                                                                                                                            case 'Y':
                                                                                                                                                                                                                        printf("Yellow
");
                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                            case 'O':
                                                                                                                                                                                                                                                        printf("Orange
");
                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                            case 'R':
                                                                                                                                                                                                                                                                                        printf("Red
");
                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                    // 4. Default case: If none of the above codes match
                                                                                                                                                                                                                                                                                                                            default:
                                                                                                                                                                                                                                                                                                                                        printf("-1
");
                                                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                
