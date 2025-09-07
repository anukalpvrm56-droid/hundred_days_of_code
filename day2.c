#include <stdio.h>

int main() {
    float r;
    printf("Enter the value of the radius: ");
    scanf("%f", &r);

    float area = 3.14 * r * r;
    float perimeter = 2 * 3.14 * r;

    printf("The area of the circle is %f\n", area);
    printf("The perimeter of the circle is %f\n", perimeter);

    return 0;
}
