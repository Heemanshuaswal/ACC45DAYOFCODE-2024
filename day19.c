#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of people
        scanf("%d", &N);
        
        int *P = (int *)malloc(N * sizeof(int)); // Array to store preferred group sizes
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }
        
        // Count occurrences of each preferred group size
        int *count = (int *)calloc(N + 1, sizeof(int)); // Index 0 will remain unused
        
        for (int i = 0; i < N; i++) {
            count[P[i]]++;
        }
        
        // Check if we can satisfy everyone's group preference
        int possible = 1;
        for (int i = 2; i <= N; i++) {
            if (count[i] % i != 0) { // If people preferring size i cannot form complete groups
                possible = 0;
                break;
            }
        }
        
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        free(P);
        free(count);
    }
    
    return 0;
}
