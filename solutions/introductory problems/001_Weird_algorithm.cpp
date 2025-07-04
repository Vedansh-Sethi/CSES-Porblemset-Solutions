#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

// this is used to memoize the sequence
unordered_map<ll, string> memo;

// this function uses recursive calls to speed up the process
string collatz(ll n) {
    if(n == 1) return memo[n] = "1";
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    else {
        string next_step;
        if (n % 2 == 1) next_step = collatz(3*n + 1);
        else next_step = collatz(n/2);
        return memo[n] = to_string(n) + " " + next_step;
    }
}

int main() {
    int n;
    cin >> n;
    cout << collatz(n);
}