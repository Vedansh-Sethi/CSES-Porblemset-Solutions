# 👑 Chessboard and Queens
**[Link to Problem → CSES #1624](https://cses.fi/problemset/task/1624/)**

--- 

### 🧠 Key Takeaways

- Thsi problem is similar to problem 14 in ideation.
- This uses 3 boolean arrays, col, diag1, and diag2, to mark which column and daigonals are free respectively.
- The main gist of this problem is in the 'solve' function.
- This function takes in the input board to see which squares are avaliable, and uses the row function to see which row to place a queen in.
- We first place a queen in the 1<sup> st</sup> row, we show the placement by updating the three boolean vectors we defined above.
- Then we place a queen in the 2<sup>nd</sup> row, this way we move to teh 8<sup>th</sup> row, if we are not able to put a queen in the last row, we move back to the 7<sup>th</sup> and place the queen in the next viable space, thenw e again move back to last row.
- Like this we first explore each possible viable case down to the last row, this is called **DFS( Depth First Search)**, an example is shown below.

#### Example 
- let us assume we have an empty board, the number of such favourable cases in this scenario is 92.
- We will explore the searching method of the computer by printing some favourable cases in the order the program  processes them.
- first arrangement - ![first arrangement](assets\arrange1.png) second arrangement- ![second arrangement](assets\arrange2.png)
- As we can see, the program moved from first arrrangement to second arrangement by only changing the least number of rows possible
- The 1<sup>st</sup> row is same in both the cases as it is first exploring all viable solutions where the 1<sup>st</sup> is arranged such.