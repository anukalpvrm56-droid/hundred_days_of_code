#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("The equation is ax^2 + bx + c\n");

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    float d = b * b - 4 * a * c;
    float x1, x2;

    if (d < 0) {
        printf("The equation has complex roots.\n");
    } else if (d == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        printf("The value of the root is %f\n", x1);
    } else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The value of one root is %f and the second root is %f\n", x1, x2);
        printf("Your discriminant d is %f\n", d);
    }

    return 0;
}