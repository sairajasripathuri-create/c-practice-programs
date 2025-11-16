include <math.h>

int main() {
    int x, y, M;
        long long result;

            // Input
                scanf("%d %d %d", &x, &y, &M);

                    // Calculate x^y using pow function from math.h
                        result = pow(x, y);

                            // Take modulo M
                                result = result % M;

                                    // Output
                                        printf("%lld
", result);

                                            return 0;
                                            }
