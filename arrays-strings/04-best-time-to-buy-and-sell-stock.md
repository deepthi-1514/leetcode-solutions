# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

The solution keeps track of the lowest stock price seen so far and calculates the profit that could be made by selling on each day. The maximum profit found during the scan is returned.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case where the maximum profit is 5 and an edge case where prices continuously decrease, giving a profit of 0.