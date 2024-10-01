#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100005

// Function to find the maximum frequency in the array
int maxFrequency(int *A, int N) {
    int count[MAX_SIZE] = {0};
    int max_freq = 0;

    for (int i = 0; i < N; i++) {
        count[A[i]]++;
        if (count[A[i]] > max_freq) {
            max_freq = count[A[i]];
        }
    }

    return max_freq;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        int A[N]; // Array declaration
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        int max_freq = maxFrequency(A, N);
        int operations = N - max_freq;
        printf("%d\n", operations);
    }

    return 0;
}
