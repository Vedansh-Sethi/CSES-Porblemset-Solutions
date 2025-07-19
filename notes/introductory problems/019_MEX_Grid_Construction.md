# 0️⃣ MEX Grid Construction
**[Link to Problem → CSES #3419](https://cses.fi/problemset/task/3419/)**

--- 

### 🧠 Key Takeaways

- For this problem, we first have to observe that there can be at max *2n + 1* distinct entries.
- We will, for obtaining every entry, create an array of booleans with size *2n + 1* and mark numbers which have appeared to the left of current number and above the current number as `true`.
- Then we will use a loop to check the least available number(i.e. which has not appeared), this is how we decide what each entry should be.
