#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    
    enum TrafficLight signal = RED;
    
    printf("The traffic light is: ");
    switch (signal) {
        case RED:
            printf("Red - Stop\n");
            break;
        case YELLOW:
            printf("Yellow - Prepare to stop\n");
            break;
        case GREEN:
            printf("Green - Go\n");
            break;
        default:
            printf("Invalid signal\n");
            break;
    }

    return 0;
}