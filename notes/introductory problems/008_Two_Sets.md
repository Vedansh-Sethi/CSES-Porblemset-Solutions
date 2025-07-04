# ➕ Two Sets

**[Link to Problem → CSES #1092](https://cses.fi/problemset/task/1092/)**

---

### 🧠 Key Takeaways

- This problem is solved by using the simple method of optimizing at every step, also called **greedy algorithm**.
- In this problem, we outright say no for any case in which the number `N` is of form *4k + 1*, or *4k + 2*, as these would yield an odd sum, which can never be evenly divided.
- If `N` is of the form *4k + 3*, and *4k*, we use the algorithm as follows:  
  1. We create two sets, 1 and 2  
  2. Then we take the maximum unselected value starting from `N` and check if it is less than half of target sum (`N(N+1)/4`),  
     - if it is, we subtract the value from the half of target sum and store the current number in **set 1**,  
     - else if the condition is not met, then we store the number in **set 2**.  
  3. This way, the two sets are set up in a way that ensures both have the same sum.
