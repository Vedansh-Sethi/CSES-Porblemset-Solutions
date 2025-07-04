# 1️⃣ Increasing Array

**[Link to Problem → CSES #1094](https://cses.fi/problemset/task/1094/)**

---

### 🧠 Key Takeaways

- We very simplistically search over the array using a window of 2 elements.
- if first element is greater than second, we increase the `moves` by `arr[i] - arr[i + 1]`.
- and we set `arr[i + 1]` to `arr[i]`.