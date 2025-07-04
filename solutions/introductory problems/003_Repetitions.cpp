#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

ll max_rep(string inp) {
    ll max_rep = 0;
    ll curr = 1;
    for(ll i = 0; i < (ll)inp.size(); i++) {
        if(inp[i] == inp[i + 1] ) {
            curr++;
        }
        else {curr = 1;}
        max_rep = max(max_rep, curr);
    }
    return max_rep;
}

int main() {
    string inp;
    cin >> inp;
    cout << max_rep(inp);
}