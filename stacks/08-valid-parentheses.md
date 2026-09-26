# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

The solution uses a stack to store opening brackets. Whenever a closing bracket is encountered, it is compared with the top bracket in the stack. If the brackets do not match, or if the stack is not empty at the end, the string is invalid.

## Complexity

* Time: O(n)
* Space: O(n)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case with `"()[]{}"` and an edge case with invalid bracket order `"([)]"`.
