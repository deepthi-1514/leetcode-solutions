# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

The solution uses a two-pointer technique to move all non-zero elements toward the beginning while keeping their original order. After placing each non-zero element in its correct position, the remaining positions contain zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case with zeroes between non-zero elements and an edge case where all elements are zero.