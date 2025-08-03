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
    ll t; cin >> t;
    vpll timings(t);
    for(ll i = 0; i < t; i++) {
        cin >> timings[i].first >> timings[i].second;
    }
    sortall(timings, [](pll a, pll b) {if(a.second == b.second) return a.first < b.first; return a.second < b.second;});
    ll count = 0;
    ll time = 0;
    ll i = 0;
    while(i < t && time < timings[t - 1].second) {
        if(time <= timings[i].first) {
            time = timings[i].second;
            count++;
        }
        i++;
    }
    cout << count;
}