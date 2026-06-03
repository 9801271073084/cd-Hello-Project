#include <stdio.h>
#include <time.h>

int main() {
    
    printf("Compile Date : %s\n", __DATE__);
    printf("Compile Time : %s\n", __TIME__);

 int hour1, min1;
    int hour2, min2;

    printf("Enter first time (HH MM): ");
    scanf("%d %d", &hour1, &min1);

    printf("Enter second time (HH MM): ");
    scanf("%d %d", &hour2, &min2);

    int time1 = hour1 * 60 + min1;
    int time2 = hour2 * 60 + min2;

    if (time1 > time2) {
        printf("First time is later.\n");
    }
    else if (time1 < time2) {
        printf("Second time is later.\n");
    }
    else {
        printf("Both times are equal.\n");
    }

time_t now;
    struct tm *local;

    time(&now);
    local = localtime(&now);

    printf("Date : %02d/%02d/%04d\n",
           local->tm_mday,
           local->tm_mon + 1,
           local->tm_year + 1900);

    printf("Time : %02d:%02d:%02d\n",
           local->tm_hour,
           local->tm_min,
           local->tm_sec);
           
     time_t currentTime;
    struct tm *localTime;
    char formattedTime[100];

    time(&currentTime);

    localTime = localtime(&currentTime);

    strftime(formattedTime,
             sizeof(formattedTime),
             "%A, %d %B %Y %I:%M:%S %p",
             localTime);

    printf("Formatted Date and Time:\n");
    printf("%s\n", formattedTime);
 
    return 0;
}