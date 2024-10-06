#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        long long X, Y; // Renting cost per month and purchasing cost
        scanf("%lld %lld", &X, &Y); // Read X and Y
        
        // Check if renting cost is greater than or equal to purchasing cost
        if (X >= Y) {
            printf("0\n"); // Renting is not beneficial
        } else {
            // Calculate the maximum number of months for which renting is cheaper
            long long max_months = (Y - 1) / X; // (Y - 1) to ensure strict inequality
            printf("%lld\n", max_months); // Output the result
        }
    }

    return 0; // Return 0 to indicate successful execution
}
