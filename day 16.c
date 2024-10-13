#include <stdio.h>
#include <string.h>

void encodeMessage(char *s, int n) {
    
    for (int i = 0; i < n - 1; i += 2) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }
    for (int i = 0; i < n; i++) {
        s[i] = 'a' + ('z' - s[i]); 
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n); 
        char s[101]; 
        scanf("%s", s);
        encodeMessage(s, n); 
        printf("%s\n", s); 
    }
    return 0;
}
