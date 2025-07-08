# 🪞 Palindrome Reroder

**[Link to Problem → CSES #1755](https://cses.fi/problemset/task/1755/)**

--- 
 
### 🧠 Key Takeaways

- We start by creting a vector of 26 elements where we keep tracck of which charcter of alphaet is occuring how many times.
- Then we do these checks :-
 1. We check if the length of input is even or odd
 2. Then we check if the number of charcters occuring odd numbr of times is 0,1 or more than 1.
- If the string length is odd, and the number of charcters occuring number of times is 1, then palindrome creation is possible, else palindrome cannot be created.
- Similarly, if string length is even, and there exists one or more characters that occur odd number of times, then palindrome creation is not possible, else it is possible.