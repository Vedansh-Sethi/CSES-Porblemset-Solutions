#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define pb push_back
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        ll a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2*min(a, b) >= max(a, b)) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}