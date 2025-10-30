/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
ROOM OCCUPANCY
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); // Seed random number generator

    printf("Room Occupancy (1 = occupied, 0 = vacant):\n");

    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
            printf("%d ", occupancy[floor][room]);

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nFloor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}