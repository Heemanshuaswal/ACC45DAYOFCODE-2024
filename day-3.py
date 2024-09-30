#include <stdio.h>

int main() {
    int X, Y, total_hours;

    printf("Enter the working hours from Monday to Thursday (X): ");
    scanf("%d", &X);
    printf("Enter the working hours on Friday (Y, Y < X): ");
    scanf("%d", &Y);

    if (Y < X) {

        total_hours = (X) + Y;
        printf("Total working hours in one week: %d\n", total_hours);
    } else {
        printf("Error: Y must be less than X.\n");
    }

    return 0;
}

