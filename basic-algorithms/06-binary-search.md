# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

The solution uses binary search on the sorted array. It checks the middle element and discards the half of the array that cannot contain the target. This continues until the target is found or the search range becomes empty.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case where the target is found and an edge case where the target is not present.