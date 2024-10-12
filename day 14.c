#include <stdio.h>

int main() {
    int o;
    scanf("%d", &o);
    while (o--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); 
        int maxTastiness = a + c; 
        maxTastiness = maxTastiness > (a + d) ? maxTastiness : (a + d); 
        maxTastiness = maxTastiness > (b + c) ? maxTastiness : (b + c); 
        maxTastiness = maxTastiness > (b + d) ? maxTastiness : (b + d); 
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}
