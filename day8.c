#include <stdio.h>
//well this is my second code of the day 8 and am uploding it as the copy 
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            printf("%d is the largest.\n", a);
        } else {
            printf("%d is the largest.\n", c);
        }
    } else {
        if (b >= c) {
            printf("%d is the largest.\n", b);
        } else {
            printf("%d is the largest.\n", c);
        }
    }

    return 0;
}
