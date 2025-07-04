#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define pb push_back
using namespace std;

void breaker(ll n) {
    ll target = n*(n+1)/4;
    vll set_1, set_2;
    for(ll i = n; i >= 1; i--) {
        if (target >= i) {
            target -= i;
            set_1.pb(i);
        }
        else set_2.pb(i);
    }
    cout << set_1.size() << "\n";
    for(int i = 0; i < set_1.size(); i++) {
        cout << set_1[i] << " ";
    }
    cout << "\n" << set_2.size() << "\n";
    for(int i = 0; i < set_2.size(); i++) {
        cout << set_2[i] << " ";
    }
}
int main() {
    ll n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2) {
        cout << "NO";
    }
    else {
        cout << "YES" << "\n";
        breaker(n);
    }
}   