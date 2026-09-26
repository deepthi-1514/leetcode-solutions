#include <stdio.h>

void moveZeroes(int nums[], int n) {

    int insertPos = 0;

    for (int i = 0; i < n; i++) {

        if (nums[i] != 0) {

            int temp = nums[insertPos];
            nums[insertPos] = nums[i];
            nums[i] = temp;

            insertPos++;
        }
    }
}

void printArray(int nums[], int n) {

    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

int main() {

    // Test Case 1: Typical case
    int nums1[] = {0, 1, 0, 3, 12};
    int n1 = 5;

    moveZeroes(nums1, n1);

    printf("Test Case 1: ");
    printArray(nums1, n1);


    // Test Case 2: Edge case - all zeroes
    int nums2[] = {0, 0, 0};
    int n2 = 3;

    moveZeroes(nums2, n2);

    printf("Test Case 2: ");
    printArray(nums2, n2);

    return 0;
}