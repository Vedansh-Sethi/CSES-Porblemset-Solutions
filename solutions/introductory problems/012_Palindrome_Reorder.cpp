#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
using namespace std;

int main() {
    string inp;
    cin >> inp;
    vll count(26, 0);
    string output;
    for(int i = 0; i < inp.size(); i++) {
        count [inp[i] - 65]++; 
    }
    ll odd = 0;
    for(ll i = 0; i < 26; i++) {
        if(count[i] % 2 == 1) {
            odd++;
        }
    }
    if (inp.size() % 2 == 0 && odd != 0) {
        cout << "NO SOLUTION";
    }
    else if(inp.size() % 2 == 1 && odd != 1) {
        cout << "NO SOLUTION";
    }
    if (inp.size() % 2 == 0 && odd == 0) {
        for(ll i = 0; i < 26; i++) {
            for(ll j = 1; j <= count[i]/2; j++) {
                output += ('A' + i);
            }
        }
        for(ll i = 26; i > 0;i--) {
            for(ll j = 1; j <= count[i - 1]/2;j++) {
                output += ('A' + i - 1);
            }
        }
        cout << output;
    }
    if(inp.size() % 2 == 1 && odd == 1) {
        ll odd_idx;
        for(ll i = 0; i < 26; i++) {
            if(count[i] % 2 == 1) {
                odd_idx = i;
            }
        }
        for(ll i = 0; i < 26; i++) {
            for(ll j = 1; j <= count[i]/2; j++) {
                output += ('A' + i);
            }
        }
        output += ('A' + odd_idx);
        for(ll i = 26; i > 0;i--) {
            for(ll j = 1; j <= count[i - 1]/2;j++) {
                output += ('A' + i - 1);
            }
        }
        cout << output;
    }
}