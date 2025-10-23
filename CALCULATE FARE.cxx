/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
FARE PER KILOMETER
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;  // KSh. 50 per kilometer
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}