#include <stdio.h>

int main() {
    long long N, M, votes;

        // Input
            scanf("%lld %lld", &N, &M);

                // To secure a strict majority, Om needs more than half of total votes
                    votes = (M / 2) + 1;

                        // Output
                            printf("%lld
", votes);

                                return 0;
                                }
