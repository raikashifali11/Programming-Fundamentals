#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        // Get the current time
        time_t currentTime = time(NULL);
        struct tm* localTime = localtime(&currentTime);

        // Print the digital clock format
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        // Wait for one second
        sleep(1);
    }

    return 0;
}