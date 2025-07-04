# 🪙 Coin Piles

**[Link to Problem → CSES #1754](https://cses.fi/problemset/task/1754/)**

--- 
 
### 🧠 Key Takeaways

- The sum of number of coins in the piles must be a multiple of 3, this is because we are removing 3 coins in each turn, if both piles are to be emptied then total coins must be multiple of 3.
- The second condition is that the no.of coins in the bigger pile must be less than 2 times the coins in smaller pile.
- This condition arises because if 2*min* < *max*, then there is no possible way to remove all the coins from both of the piles simultaneously.
- for example, let us take the case of 10 23, here 20 < 23, therefore even if we do our best by removing 2 coins rom the right pile always and removing 1 coin from the left, we end up with 3 coins in the right one and no moves to make.
