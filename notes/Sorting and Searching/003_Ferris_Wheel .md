# Ferris Wheel

**[Link to Problem → CSES #1090](https://cses.fi/problemset/task/1090/)**

--- 

### 🧠 Key Takeaways

- We first sort the weights of children
- Our strategy for this would be too add the minimum and maximum weights, if it is greater than the limit, we give one gondola to the max weight, and then add the next max weight to minimum weight, let us assume that the sum now is less than the limit, so now we give one gondola to the both of them, then we do the same thing and add the next max weight and next min weight.