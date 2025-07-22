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
#define sortall(x) sort((x).begin(), (x).end());
using namespace std;

int main() {
    ll t; cin >> t;
    vll intimes(t);
    vll outtimes(t);
    vll clock;
    for(ll i = 0; i < t; i++) {
        ll x, y; cin >> x >> y;
        intimes[i] = x; outtimes[i] = y;
        clock.pb(x); clock.pb(y);
    }
    sortall(intimes); sortall(outtimes); sortall(clock);
    ll people = 0, peopleMax = 0;
    for(ll i = 0; i < 2*t; i++) {
        auto k1 = lower_bound(all(intimes), clock[i]);
        auto k2 = lower_bound(all(outtimes), clock[i]);
        if(*k1 == clock[i]) {people++;}
        if(*k2 == clock[i]) {people--;}
        peopleMax = max(people, peopleMax);
    }
    cout << peopleMax;
}