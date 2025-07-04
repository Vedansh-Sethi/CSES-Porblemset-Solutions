#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define pb push_back
using namespace std;

ll MOD = 1e9 + 7;

long long fast_expo_mod(long long n, long long pow) {
    long long result = 1;
    long long base = n%MOD;
    while(pow >= 1) {
        if(pow % 2 == 0) {
            base = (base*base)%MOD;
            pow /= 2;
        }
        else {
            result = base*result %MOD;
            pow--;       
        }
    }
    return result;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << fast_expo_mod(2, n); 
}