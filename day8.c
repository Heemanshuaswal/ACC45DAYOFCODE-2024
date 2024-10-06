#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        long long P, Q, R, S;
        scanf("%lld %lld %lld %lld", &P, &Q, &R, &S);
        
        // Check for monopoly conditions
        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
