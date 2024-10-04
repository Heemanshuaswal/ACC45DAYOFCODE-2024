#include <stdio.h>

int main() {
    int T; s
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X; // Starting time
        scanf("%d", &X);
        if (X <= 7) {
            printf("Yes\n"); 
        } else {
            printf("No\n"); 
        }
    }

    return 0;
}
