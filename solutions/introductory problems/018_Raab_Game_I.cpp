#include <iostream>
#include <vector>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;
 
int main () {
    ll t; cin >> t;
    while(t--) {
        ll n, a , b;
        cin >> n >> a >> b;
        ll eq = n - a - b;
        bool game = true;
        if(eq < 0 || ((a == 0 || b == 0) && eq != n)) {
            game = false;
        }
        if(game) {
            cout << "YES\n";
            for(ll i = 0; i < n; i++) {
                cout << i + 1 << ' ';
            }
            cout << '\n';
        for(ll i = 0; i < n - eq; i++) {
            cout << (i + a)%(n - eq) + 1 << ' ';
        }
        for (ll i = n - eq; i < n; i++) {
            cout << i + 1 << ' ';
        }
        cout << '\n';
        }
        else cout << "NO\n";
    }
}