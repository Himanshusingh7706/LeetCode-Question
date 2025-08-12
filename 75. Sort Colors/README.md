# Sort Colors (Dutch National Flag Algorithm)

This project demonstrates an implementation of the **Dutch National Flag Algorithm** to sort an array consisting of only three distinct elements (`0`, `1`, and `2`).

## Problem Statement
Given an array containing `0`, `1`, and `2`, sort it in **ascending order** in-place without using built-in sorting functions.

Example:

## Algorithm Used
We use **three pointers**:
- `zero` → Tracks the position where the next `0` should be placed.
- `one` → Current index being checked.
- `two` → Tracks the position where the next `2` should be placed.

Steps:
1. If the current element is `0`, swap it with the element at `zero` and increment both `zero` and `one`.
2. If the current element is `1`, just move `one` forward.
3. If the current element is `2`, swap it with the element at `two` and decrement `two`.

This ensures all `0`s go to the left, all `2`s go to the right, and `1`s stay in the middle.

## Time Complexity
- **O(n)** — We traverse the array only once.
- **O(1)** extra space.