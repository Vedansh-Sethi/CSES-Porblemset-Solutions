# Restaurant Tickets

**[Link to Problem → CSES #1619](https://cses.fi/problemset/task/1619/)**

--- 

### 🧠 Key Takeaways

- For this problem we use three vectors of integers
 1. First keeps track of in times of customers (`intimes`)
 2. Second keeps track of out times of customers (`outtimes`)
 3. Third keeps track of times mentioned in general (`clock`)
- Then we iterate through `clock` array (sorted) to check see the event times, and see if a person is leaving or entering the restaurant using the `lower_bound` function. We increase and decrease the counter accordingly and update `peopleMax` every iteration.