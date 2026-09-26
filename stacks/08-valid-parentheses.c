#include <stdio.h>
#include <string.h>

int isValid(char s[]) {

    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Push opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        }

        // Check closing brackets
        else {

            if (top == -1) {
                return 0;
            }

            char topBracket = stack[top];

            if ((s[i] == ')' && topBracket != '(') ||
                (s[i] == ']' && topBracket != '[') ||
                (s[i] == '}' && topBracket != '{')) {
                return 0;
            }

            top--;
        }
    }

    // Stack should be empty
    return top == -1;
}

int main() {

    // Test Case 1: Typical case
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n",
           isValid(s1) ? "true" : "false");


    // Test Case 2: Edge case - invalid order
    char s2[] = "([)]";

    printf("Test Case 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}