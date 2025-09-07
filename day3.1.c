#include <stdio.h>

int main() {
    float cel;
    float fer;
    
    printf("Enter the value in Celsius: ");
    scanf("%f", &cel);
    
    fer = (cel * 1.8) + 32;

    printf("The value in Fahrenheit is %f\n", fer);


    return 0;
}
