#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
using namespace std;

int main() {
    ll n; cin >> n;
    vll arr(n);
    for(ll i = 0; i< n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vll dist;
    ll curr = arr[0];
    dist.pb(curr);
    for(ll i = 0; i < n; i++) {
        if(curr != arr[i]) {
            curr = arr[i];
            dist.pb(curr);
        }
    }
    cout << dist.size();
}