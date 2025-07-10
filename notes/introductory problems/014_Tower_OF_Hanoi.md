# 🗼 Tower of Hanoi
**[Link to Problem → CSES #2165](https://cses.fi/problemset/task/2165/)**

--- 

### 🧠 Key Takeaways

- This problem uses recursion to solve the problem of Tower of Hanoi.
- The strategy to follow is :- 
 1. If we have to solve tower of hanoi for `n` discs, we will first shift `n - 1` discs to the 2<sup>nd</sup> rod.
 2. Then we will move the n<sup>th</sup> disc to  3<sup>rd</sup> rod.
 3. Then we will again move the `n - 1` discs on 2<sup>nd</sup> rod to the 3<sup>rd</sup> rod.
- This strategy is purely recursive and does the job in minmum number of moves, that is 2<sup>n</sup> - 1.