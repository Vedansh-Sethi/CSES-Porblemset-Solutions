#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define vll vector<ll>
#define vvll vector<vll>
#define pb push_back
using namespace std;

vvll solve(ll n) {
    vvll out(n, vll(n));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j< n; j++) {
            vector<bool> avail(2*n + 1);
            for(ll k = 0; k < i; k++) {
                avail[out[k][j]] = true;
            }
            for(ll k = 0; k < j; k++) {
                avail[out[i][k]] = true;
            }
            ll x = 0;
            while(avail[x]) {
                x++;
            }
            out[i][j] = x;
        }
    }
    return out;
}

int main() {
    ll n; cin >> n;
    vvll out = solve(n);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cout << out[i][j] << ' ';
        }
        cout << '\n';
    }
}