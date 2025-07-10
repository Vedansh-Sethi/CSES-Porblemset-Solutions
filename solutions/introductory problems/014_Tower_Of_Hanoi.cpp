#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long 
#define vll vector<ll>
#define vs vector<string>
#define vpll vector<pair<ll, ll>>
#define pb push_back
using namespace std;

ll fast_expo(ll base, ll pow) {
    ll res = 1;
    while(pow > 0) {
        if (pow % 2 == 1) {
            res *= base;
            pow--;
        }
        else {base *= base; pow /= 2;}
    }
    return res;
}

vpll moves(ll inp, ll  from, ll to, ll used) {
    vpll output;
    if (inp == 1) {output.pb({from, to});}
    else {
        vpll sub_move1 = moves(inp - 1, from, used, to);
        output.insert(output.end(), sub_move1.begin(), sub_move1.end());
        output.pb({from, to});
        vpll sub_move2 = moves(inp - 1, used, to, from);
        output.insert(output.end(), sub_move2.begin(), sub_move2.end());
    }
    return output;
}

int main() {
    ll inp; cin >> inp;
    ll total_moves = fast_expo(2, inp) - 1;
    cout << total_moves << '\n';
    vpll output = moves(inp, 1, 3, 2);
    for(ll i = 0; i < output.size(); i++) {
        cout << output[i].first << " " << output[i].second << "\n";
    }
}