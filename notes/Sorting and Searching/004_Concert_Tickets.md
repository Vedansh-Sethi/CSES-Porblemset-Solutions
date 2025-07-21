# Concert Tickets

**[Link to Problem → CSES #1091](https://cses.fi/problemset/task/1091/)**

--- 

### 🧠 Key Takeaways

- We use a new data structure in this problem called multiset, we are using it because it is always sorted.
- We also use a function called upper_bound, which finds the pointer to the smallest element larger than a given target.
- We use these to take in a cost and then search the multiset for an upper_bound, if it is in the beginning of the set, then they can buy no ticket, else if we find a match, we erase the ticket and move to the next query