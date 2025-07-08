#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define vs vector<string>
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

vll bin_add(vll n1, vll n2, ll length) {
    ll carry = 0;
    vll result(length, 0);
    for(ll i = length; i > 0; i--) {
        result[i - 1] = n1[i - 1] + n2[i - 1] + carry;
        carry = result[i - 1]/ 2;
        result[i - 1] %= 2; 
    }
    return result;
}

vll to_bin(ll n, ll length) {
    vll out(length, 0);
    ll i = length - 1;
    while(n > 0 && i > 0) {
        out[i] = n % 2;
        n /= 2;
        i--;
    }
    return out;
}

int main() {
    ll inp;
    cin >> inp;
    ll lim = fast_expo(2, inp);
    for(ll i = 0; i < lim - 1; i++) {
        vll out = to_bin(i^(i>>1), inp);
        for(ll j = 0; j < inp; j++) {
            cout << out[j];
        }
        cout << '\n';
    }
}