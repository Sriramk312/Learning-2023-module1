#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char* timeStr) 
{
    char* token;
    char* delimiter = ":";
    unsigned long totalSeconds = 0;

    // Split the time string into hour, minute, and second tokens
    char* hoursToken = strtok((char*)timeStr, delimiter);
    char* minutesToken = strtok(NULL, delimiter);
    char* secondsToken = strtok(NULL, delimiter);

    // Convert the tokens to unsigned long integers
    unsigned long hours = strtoul(hoursToken, NULL, 10);
    unsigned long minutes = strtoul(minutesToken, NULL, 10);
    unsigned long seconds = strtoul(secondsToken, NULL, 10);

    // Compute the total number of seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

unsigned long computeTotalSeconds(const char* timeStr) ;

int main() 
{
    const char* timeStr = "10:12:50";
    unsigned long totalSeconds = computeTotalSeconds(timeStr);
    printf("Total seconds: %lu\n", totalSeconds);
    return 0;
}
