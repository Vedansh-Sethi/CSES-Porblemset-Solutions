# Sum of Two Values

**[Link to Problem → CSES #1640](https://cses.fi/problemset/task/1640/)**

--- 

### 🧠 Key Takeaways

- This problem uses two pointers to solve the problem
- We first take in only those values which are lesser than the required sum in order to remove the noise from the array
- Then we sort the array and use the two pointers to slide across the array, one from left, one from right
- If sum of the values is greater than x, we decrease the right pointer, and if it is smaller then we increase the left pointer