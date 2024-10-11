#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int x, Y; 
        scanf("%d %d", &x, &Y);
        if (2 * Y >= x) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}
