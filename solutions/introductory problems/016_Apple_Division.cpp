#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define vll vector<ll>
#define pb push_back
#define vb vector<bool>
using namespace std;

int main() {
    ll n; cin >> n;
    vll arr(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll min_diff = sum;
    for(ll i = 0; i < 1<<n; i++) {
        ll set1 = 0, set2 = 0;
        for(ll j = 0; j < n; j++) {
            if(i&(1<<j)) set1 += arr[j];
            else set2 += arr[j];
        }
        ll g = max(set1, set2);
        ll l = min(set1, set2);
        min_diff = min(min_diff, g - l);
    }
    cout << min_diff;
}