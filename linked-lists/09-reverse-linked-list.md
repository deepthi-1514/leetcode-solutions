# Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

The solution reverses the linked list using three pointers: `prev`, `current`, and `next`. The `next` pointer temporarily stores the next node, while the current node is connected to the previous node. The pointers are then moved forward until the entire linked list is reversed.

## Complexity

* Time: O(n)
* Space: O(1)

## Notes

Tested the solution locally before submitting it to LeetCode. Tested a typical case with five nodes and an edge case containing a single node.
