#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    
    while (m--) {
        int N, l;
        scanf("%d %d", &N, &l);
        int face_down = N - l;
        int min_flips = (l < face_down) ? l : face_down;
        printf("%d\n", min_flips);
    }
    
    return 0;
}
