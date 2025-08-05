#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vb vector<bool>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sortall(x, comparator) sort((x).begin(), (x).end(), comparator)
using namespace std;

int main() {
    ll n; cin >> n;
    ll x; cin >> x;
    vpll arr;
    for(ll i = 0; i < n; i++) {
        ll curr; cin >> curr;
        if(curr < x) {
            arr.pb({i + 1, curr});
        }
    }
    ll size = arr.size();
    sortall(arr, [](pll a, pll b) {return a.second < b.second;});
    bool pairFound = false;
    ll idx1, idx2;
    ll l = 0, r = size - 1;
    while(l < r) {
        if(arr[l].second + arr[r].second == x) {
            pairFound = true;
            idx1 = arr[l].first;
            idx2 = arr[r].first;
            break;
        }
        else if(arr[l].second + arr[r].second > x) r--;
        else l++;
    }
    if(pairFound) cout << idx1 << " " << idx2;
    else cout << "IMPOSSIBLE";
}