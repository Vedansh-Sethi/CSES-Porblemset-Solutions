# 🍎 Apple Division
**[Link to Problem → CSES #1623](https://cses.fi/problemset/task/1623/)**

--- 

### 🧠 Key Takeaways

- We will use bitmasking magic in this problem.
- We have to make subsets and track the minimum difference, so we will use binary strings of length N (which is the size of the set) to track which element is in the `set 1` and which is in `set 2`.
- We will use the `&` (and) operation and the `<<`(right shift) operator to execute this.
- There are total 2<sup>n</sup> permutations we have to check, ranging from 0 to 2<sup>n</sup> - 1.

#### Example

- Let us consider that N = 4.
- We will run a loop from 0 to 15, let us take the case of i = 7 (`0111`).
- Now we run another for loop from j = 0 to j = 3.
- Them we check if `i&(1<<j)` is anything other than `0`.
- Here we are esentially taking the `&` operator and checking if the j<sup>th</sup> bit of `i` is 1 or not, if it is 1, then we put the j<sup>th</sup> element in `set 1`, else in `set 2`