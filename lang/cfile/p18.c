
#include <stdio.h>

// Define a structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to update time by one second
void updateTime(struct Time *time) {
    time->seconds++;
    
    // Handle seconds overflow
    if (time->seconds >= 60) {
        time->minutes++;
        time->seconds = 0;
    }
    
    // Handle minutes overflow
    if (time->minutes >= 60) {
        time->hours++;
        time->minutes = 0;
    }
    
    // Handle hours overflow (24-hour clock)
    if (time->hours >= 24) {
        time->hours = 0;
    }
}

// Function to print time
void printTime(struct Time time) {
    printf("%02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}

int main() {
    struct Time currentTime;

    
    printf("Enter current time (HH MM SS): ");
    scanf("%d %d %d", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);

    printf("Current Time: ");
    printTime(currentTime);

    // Update time by one second
    updateTime(&currentTime);

    printf("Updated Time: ");
    printTime(currentTime);

    return 0;
}

