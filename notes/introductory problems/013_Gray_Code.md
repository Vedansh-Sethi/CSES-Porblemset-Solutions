# 0️⃣ Gray Code

**[Link to Problem → CSES #2205](https://cses.fi/problemset/task/2205/)**

--- 
 
### 🧠 Key Takeaways

- This program uses the XOR operation, and bitwise shift.
- let us take example of gray code for bit length 3.
- we define f(i) = i XOR (i>>1).
- `f(0)` = `000`, `f(1)` = `001`, `f(2)` = `011`, `f(3)` = `010`, `f(4)` = `110`, `f(5)` = `111`, `f(6)` = `101` and `f(7)` = `100`.
- We can see that for 0 to 7, there is a single bit flip for each `f(i)` and `f(i + 1)`.
- We use this property for printing the gray code for other numbers like this.

#### The proof of the property :-
1. There are two ways a binary could end, with a string of 0s or a string of 1s.
2. let us take the first case :-
 - let i be a binary string `i` = `a011.(string of 1s)..11` (where `a` is an arbitary binary string)
 - then `i + 1` = `a100...00`.
 - now we `f(i)` = `b0100..00` and `f(i + 1)` = `b110...00` (where `b` is a arbitary binary string created during application `f(x)` operator to `i` and `i + 1`, it will be same as `a` is same).
 - therefore we can see for the first case `f(i)` and   `f(i + 1)` differ only in 1 bit.
3. now if we see the second case :-
- let i be a binary string `i` = `a100...00` (where `a` is an arbitary binary string)
- then `i + 1` = `a100...01`.
- now we `f(i)` = `b110...00` and `f(i = 1)` = `b110...01` (where `b` is a arbitary binary string created during application `f(x)` operator to `i` and `i + 1`, it will be same as `a` is same).
- therefore we can see for the second case `f(i)` and `f(i + 1)` differ only in 1 bit. 