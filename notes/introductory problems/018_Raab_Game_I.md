# 🃏 Raab Game I
**[Link to Problem → CSES #3399](https://cses.fi/problemset/task/3399/)**

--- 

### 🧠 Key Takeaways

- This is a very simple problem comapared to the previous 3-4 problems we have dealt.
- We will do the operation in 2 phases, first we set up the ties, then we will set up the wins.

#### Example 
For `9` `4` `3`
- We have 2 ties, so we first set them up.
- 8 9 <br> 8 9
- Next we have 7 plays, where 4 wins are of the first player, and 3 are of the second player, so for that we cyclically count from `a` to `a + b`, then from `1` to `a - 1` (where `a` are the wins of the first player). 
- 1 2 3 4 5 6 7 <br> 5 6 7 1 2 3 4 
- This is one of the possible games played.