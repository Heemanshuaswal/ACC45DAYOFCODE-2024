#include <stdio.h>
#include <stdlib.h>  // For abs function

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int distance = abs(n - m);
       
        int time1to1catch = distance; 
       
        printf("%d\n", time1to1catch);
    }

    return 0;
}
