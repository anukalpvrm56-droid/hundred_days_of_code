#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of the 1st number: ");
    scanf("%d", &a);

    printf("Enter the value of the 2nd number: ");
    scanf("%d", &b);

    // Swapping using temporary variable
    c = a;
    a = b;
    b = c;

    printf("The new value of the 1st number is %d\n", a);
    printf("The new value of the 2nd number is %d\n", b);

    return 0;
}
