# 🌀 Weird Algorithm

**[Link to Problem → CSES #1068](https://cses.fi/problemset/task/1068/)**

---

### 🧠 Key Takeaways

- This problem gave me hands-on experience with **memoization**, a powerful optimization technique in recursive algorithms.
- I built a **recursive function** to generate the Collatz sequence (aka the “Weird Algorithm”). It stores previously computed results in an `unordered_map`, so repeated calls for the same input don’t recalculate anything.
- This approach becomes especially useful when handling **multiple queries** or very large input ranges, since each subsequent query benefits from previously stored results — essentially learning as it runs. 📚⚡