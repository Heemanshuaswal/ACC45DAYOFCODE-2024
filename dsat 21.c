#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        int attacks_normal = (int)ceil((double)H / X);

        int total_attacks_special = 1;  
        if (H - Y > 0) {
            total_attacks_special += (int)ceil((double)(H - Y) / X);
        }

        int min_attacks = attacks_normal < total_attacks_special ? attacks_normal : total_attacks_special;

        
        printf("%d\n", min_attacks);
    }

    return 0;
}
