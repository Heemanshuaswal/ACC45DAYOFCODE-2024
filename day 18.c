#include <stdio.h>
#include <math.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B; // Number of teams, duration of each round, and break time
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds
        int rounds = log2(N);
        
        // Total time calculation:
        // Each round takes A minutes, and there are (rounds - 1) breaks of B minutes
        int total_time = (rounds * A) + ((rounds - 1) * B);
        
        printf("%d\n", total_time);
    }
    
    return 0;
}
