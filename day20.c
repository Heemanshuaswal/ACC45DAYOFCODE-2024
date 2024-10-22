#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  

        int valuation1 = (A * 100) / 10; 
        int valuation2 = (B * 100) / 20;  
        if (valuation1 > valuation2) {
            printf("FIRST\n");
        } else if (valuation1 < valuation2) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}
