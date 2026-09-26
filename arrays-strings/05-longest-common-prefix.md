# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

The solution compares the characters at the same position across all strings. It starts with the first string and checks whether each character is common to all other strings. The comparison stops when a character differs or when one of the strings ends.

## Complexity

- Time: O(n × m)
- Space: O(m)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case with "flower", "flow", and "flight", which gives "fl", and an edge case with no common prefix, which gives an empty string.