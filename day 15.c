#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);  
    while (p--) {
        int N;
        scanf("%d", &N);  
        int frequency[101] = {0}; 
        for (int i = 0; i < N; i++) {
            int animal_type;
            scanf("%d", &animal_type);
            frequency[animal_type]++;
        }

        int can_split = 1; 
        for (int i=1; i<=100;i++) {
            if (frequency[i] %2!=0) { 
                can_split = 0; 
                break;
            }
        }
        if (can_split) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
