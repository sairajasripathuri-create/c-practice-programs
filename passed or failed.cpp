#include <stdio.h>

int main() {
    int english, maths, physics, chemistry, computer_science;

        // 1. Read the five subject marks from a single line input
            if (scanf("%d %d %d %d %d", &english, &maths, &physics, &chemistry, &computer_science) != 5) {
                    // Handle potential reading error, although not strictly required by the problem
                            return 1;
                                }

                                    /* 2. Check the passing condition for ALL subjects.
                                           The student is PASSED if and only if the mark in EVERY subject
                                                  is strictly greater than 34 (i.e., mark >= 35). */
                                                      if (english > 34 && maths > 34 && physics > 34 && chemistry > 34 && computer_science > 34) {
                                                              printf("PASSED
");
                                                                  } else {
                                                                          // If even one subject mark is 34 or less, the student is FAILED.
                                                                                  printf("FAILED
");
                                                                                      }

                                                                                          return 0;
                                                                                          }
                                                                                          
