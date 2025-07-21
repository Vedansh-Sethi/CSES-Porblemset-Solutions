#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
#define vll vector<ll>
#define vb vector<bool>
#define sortall(x) sort(x.begin(), x.end())
using namespace std;

ll INF = 1e9 + 1;
int main() {
    ll t , c; cin >> t >> c;
    vll cPrice(c);
    multiset<ll> tPrice;
    for(ll i = 0; i < t; i++) {
        ll x; cin >> x;
        tPrice.insert(x);
    }
    for(ll& x : cPrice) cin >> x;
    for(ll& reqPrice : cPrice) {
        auto k = tPrice.upper_bound(reqPrice);
        if(k == tPrice.begin()) {
            cout << -1 << '\n';
        }
        else {
            k--;
            cout << *k << '\n';
            tPrice.erase(k);
        }
    }
}