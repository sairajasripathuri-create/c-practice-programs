#include <stdio.h>
#include <ctype.h> // Required for the tolower() function

int main() {
    // Variable to store the single character input
        char ch;

            // 1. Read the single character input
                // Note the space before %c to consume any potential leading whitespace
                    if (scanf(" %c", &ch) != 1) {
                            // Handle input error
                                    return 1;
                                        }

                                            // 2. Convert the character to lowercase for case-insensitive comparison
                                                char lower_ch = tolower(ch);

                                                    // 3. Check if the character is a vowel using a switch statement
                                                        // The switch statement is ideal for checking a single variable against multiple constants.
                                                            switch (lower_ch) {
                                                                    case 'a':
                                                                            case 'e':
                                                                                    case 'i':
                                                                                            case 'o':
                                                                                                    case 'u':
                                                                                                                printf("VOWEL
");
                                                                                                                            break;
                                                                                                                                        
                                                                                                                                                // 4. If it's not a vowel, and since the constraints guarantee it's an alphabet,
                                                                                                                                                        // it must be a consonant.
                                                                                                                                                                default:
                                                                                                                                                                            printf("CONSONANT
");
                                                                                                                                                                                        break;
                                                                                                                                                                                            }

                                                                                                                                                                                                return 0;
                                                                                                                                                                                                }
                                                                                                                                                                                                
