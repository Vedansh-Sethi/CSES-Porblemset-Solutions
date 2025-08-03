# Movie Festival

**[Link to Problem → CSES #1629](https://cses.fi/problemset/task/1629/)**

--- 

### 🧠 Key Takeaways

- This problem requires uses pairs of integers, sorted in ascending order of end time.
- Now we use the simple while loop till time < last end time.
- Till the while loop works, we will see if time < start time of next movie, if this is true, then we set time = end time of this move, else we move to the next movie.
- We sort the end time in ascending order as we want to find the smallest runtime after which a movie ends to maximise movies watched.