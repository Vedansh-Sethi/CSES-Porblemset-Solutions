# Apartments

**[Link to Problem → CSES #1084](https://cses.fi/problemset/task/1084/)**

--- 

### 🧠 Key Takeaways

- This problem uses running pointer
- We first sort both available apartment sizes, and then applicant apartments sizes
- We define a running pointer (`runptr`), it will increment `runptr` if `current requirement size` - `current avaiable size` is greater than `max difference`.
- After that condition is satisfied, we check if `abs(current requirement size - current available size)` < `max difference`, if it true, then we increment `runptr` and `result`.