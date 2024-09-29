#include <stdio.h>

int calculate_cost(int N, int X) {
    
    int subscriptionsneeded = (N+5) / 6; 
    int total_cost = subscriptionsneeded * X;
    return total_cost;
}

int main() {
    int N, X;
    printf("Enter the number of friends (N): ");
    scanf("%d", &N);
    printf("Enter the cost of one subscription (X): ");
    scanf("%d", &X);
    int total_cost = calculate_cost(N, X);
    printf("The minimum total cost is: %d rupees\n", total_cost);

    return 0;
}

