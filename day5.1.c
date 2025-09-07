#include <stdio.h>
#include <math.h>

int main() {
    double amount, rate, time;
    double sim, com;
    int n; // number of times interest is compounded per year

    // Input
    printf("Enter the principal amount: ");
    scanf("%lf", &amount);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Simple Interest
    sim = (amount * rate * time) / 100.0;
    printf("Simple Interest: %.2lf\n", sim);
    printf("Amount after simple interest: %.2lf\n", amount + sim);

    // Compound Interest
    com = amount * pow(1 + (rate / (100.0 * n)), n * time);
    printf("Compound Interest: %.2lf\n", com - amount);
    printf("Amount after compound interest: %.2lf\n", com);

    return 0;
}
