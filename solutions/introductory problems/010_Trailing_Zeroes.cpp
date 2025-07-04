#include <iostream>
#include <cmath>
#include <vector>
#define ll long long 
#define vll vector<ll>
#define pb push_back
using namespace std;

int main() {
    int n;
    cin >> n;
    ll zeroes = 0;
    while(n > 0) {
        zeroes += n/5;
        n /= 5;
    }
    cout << zeroes;
}