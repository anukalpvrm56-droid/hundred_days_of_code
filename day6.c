#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {            // Outer if
        if (num == 0) {        // Nested if
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {                   // Outer else
        printf("The number is negative.\n");
    }

    return 0;
}
