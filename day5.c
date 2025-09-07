#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60; // remaining minutes
    seconds = total_seconds % 60;          // remaining seconds

    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
