#include <stdio.h>

void longestCommonPrefix(char *strs[], int n, char result[]) {

    int i = 0;

    while (strs[0][i] != '\0') {

        for (int j = 1; j < n; j++) {

            if (strs[j][i] == '\0' || strs[j][i] != strs[0][i]) {
                result[i] = '\0';
                return;
            }
        }

        result[i] = strs[0][i];
        i++;
    }

    result[i] = '\0';
}

int main() {

    // Test Case 1: Typical case
    char *strs1[] = {"flower", "flow", "flight"};
    char result1[100];

    longestCommonPrefix(strs1, 3, result1);

    printf("Test Case 1: \"%s\"\n", result1);


    // Test Case 2: Edge case - no common prefix
    char *strs2[] = {"dog", "racecar", "car"};
    char result2[100];

    longestCommonPrefix(strs2, 3, result2);

    printf("Test Case 2: \"%s\"\n", result2);

    return 0;
}
