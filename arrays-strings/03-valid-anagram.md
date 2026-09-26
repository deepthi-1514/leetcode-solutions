# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

The solution uses a frequency-counting technique to compare the characters in both strings. A count array of size 26 is used to increase the count for each character in the first string and decrease it for each character in the second string. If all counts are zero at the end, the two strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case with "anagram" and "nagaram", and an edge case with strings containing different characters.