# 🧾 Creating Strings
**[Link to Problem → CSES #1622](https://cses.fi/problemset/task/1622/)**

--- 

### 🧠 Key Takeaways

- We start the program by creating function that creates the next permutation, we find the largest index `i` for which the character at `i + 1` index is greater than the one at `i`.
- Secondly we find the index `j` where the character which is greater than character at `i` and is closest to it. 
- Then we swap the character at index `i` and the character at `j`, and sort string ahead alphabetically.

#### Why this works?

- The first step is effectively finding the largest index after which the word is already at it's maximum permutation.
- Then we are finding the replacement for the character at `i` index, this is for making alphabetically next permutation from index `i` to end of the string.
- Then we sort the further string alphabetically, which is to make the string from `i + 1` to end of the string have it's lowest permutation.
- Doing this repeatedly yields the next permutation.

#### Example 

- let us do it for `abcaa`.
- Here `i` = 1, and `j` = 2, therefore swapping yields `acbaa`.
- Next we sort from `j` to end, which yields `acaab`, which is the next permutation. 