#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int W, X, Y, Z; // Weights and object weight
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        
        // Check all combinations to see if any add up to W
        if (W == X || W == Y || W == Z ||
            W == (X + Y) || W == (X + Z) || W == (Y + Z) ||
            W == (X + Y + Z)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
