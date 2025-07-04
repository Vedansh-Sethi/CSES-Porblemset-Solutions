# ❓ Missing Number

**[Link to Problem → CSES #1083](https://cses.fi/problemset/task/1083/)**

---

### 🧠 Key Takeaways

- This program uses vectors which have numbes stored from the input (along with an extra zero), we then sort the vector, and runa for loop in which we check if i + 1<sup>th</sup> element should be equal to i<sup>th</sup> element + 1.
- If the above condition fails then the output is i<sup>th</sup> element + 1.
- The only barely tricky part in this problem is to deal with the case when the mising number is 1.
- This can be done be starting counting with 0 rather than 1.