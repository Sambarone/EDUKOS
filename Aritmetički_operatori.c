#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return(*(int*)a - *(int*)b);
}

int main() {
    int nums[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, 10, sizeof(int), cmpfunc);
    int smallestIdx;
    int smallestDifference = -1;
    int difference;
    for (i = 0; i < 9; i++) {
        difference = abs(nums[i] - nums[i+1]);
        if (smallestDifference == -1 || difference < smallestDifference) {
            smallestDifference = difference;
            smallestIdx = i;
        }
    }

    printf("Najblizi brojevi su %d i %d", nums[smallestIdx], nums[smallestIdx + 1]);

    return 0;
}
