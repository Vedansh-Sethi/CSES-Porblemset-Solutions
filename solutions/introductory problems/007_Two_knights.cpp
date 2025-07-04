#include<cmath>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll pos(ll n) {
    return n*n*(n*n - 1)/2 - 4*n*n + 12*n - 8;
}

int main () {
    ll t;
    cin >> t;
    for(int i  = 1; i <= t; i++) {
        cout << pos(i) << "\n";
    }
}