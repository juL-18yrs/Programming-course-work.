/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
WEEKLY REVENUE
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;

    printf("Enter revenue for each day of the week:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n", average);

    return 0;
}