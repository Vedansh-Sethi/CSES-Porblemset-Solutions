# 🐴 Knight Moves Grid
**[Link to Problem → CSES #3419](https://cses.fi/problemset/task/3419/)**

--- 

### 🧠 Key Takeaways

- This uses a technique called **BFS(breadth first search)**, which is layer by layer travel.
- From first layer to all nodes of second layer, then all nodes of third, and so on.
- So we label all the first layer nodes(squares that can be reached in 1 move) as 1, then subsequently explore all of such kind and so on.
- We do this by using a queue, we first queue all the nodes in the first layer, and we visit them in order, labelling all its adjacencies as `moves required to reach current node` + 1.
- When all nodes of the first layer end, we do the same for all the nodes of the second layer, and so on.