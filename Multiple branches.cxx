/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
MULTIPLE BRANCHES
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hotel[3][5][10];   // [branches][floors][rooms]
    int totalOccupied = 0;
    int branchOccupied[3] = {0, 0, 0}; // total per branch

    srand(time(0)); // random seed for different results every run

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (int b = 0; b < 3; b++) {         // Branch loop
        for (int f = 0; f < 5; f++) {     // Floor loop
            for (int r = 0; r < 10; r++) {// Room loop
                hotel[b][f][r] = rand() % 2; // Randomly 0 or 1
                totalOccupied += hotel[b][f][r];   // Add to overall total
                branchOccupied[b] += hotel[b][f][r]; // Add to branch total
            }
        }
    }

    // Display occupancy per branch
    for (int b = 0; b < 3; b++) {
        printf("Branch %d occupied rooms: %d\n", b + 1, branchOccupied[b]);
    }

    // Display total across all branches
    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}