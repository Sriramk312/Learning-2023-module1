#include <stdio.h>
struct Time 
{
    int hours;
    int minutes;
    int seconds;
};
// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time t1, struct Time t2) 
{
    struct Time diff;
    int seconds1, seconds2, totalSeconds;

    // Convert time periods to seconds
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    totalSeconds = (seconds1 > seconds2) ? (seconds1 - seconds2) : (seconds2 - seconds1);

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = totalSeconds / 3600;
    diff.minutes = (totalSeconds % 3600) / 60;
    diff.seconds = (totalSeconds % 3600) % 60;
    return diff;
}

int main()
 {
    struct Time startTime, endTime, diffTime;
    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);
    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    // Calculate the difference between the time periods
    diffTime = calculateTimeDifference(startTime, endTime);
    printf("\nTime difference: %d hours, %d minutes, %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);
    return 0;
}
