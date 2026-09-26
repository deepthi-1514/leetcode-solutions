#include <stdio.h>

void reverseString(char s[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

void printString(char s[], int n) {
    printf("[");

    for (int i = 0; i < n; i++) {
        printf("\"%c\"", s[i]);

        if (i < n - 1) {
            printf(",");
        }
    }

    printf("]\n");
}

int main() {

    // Test Case 1: Typical case
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int n1 = 5;

    reverseString(s1, n1);

    printf("Test Case 1: ");
    printString(s1, n1);


    // Test Case 2: Edge case - single character
    char s2[] = {'a'};
    int n2 = 1;

    reverseString(s2, n2);

    printf("Test Case 2: ");
    printString(s2, n2);

    return 0;
}