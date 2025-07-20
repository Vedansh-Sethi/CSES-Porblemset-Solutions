#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define ll long long
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
#define sortall(x) sort(x.begin(), x.end())
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll app, apm, diff; cin >> app >> apm >> diff;
    vll appSiz(app), apmSiz(apm);
    for(ll i = 0; i< app; i++) {
        cin >> appSiz[i];
    }
    for(ll i = 0; i < apm; i++) {
        cin >> apmSiz[i];
    }
    sortall(appSiz);
    sortall(apmSiz);
    ll sold = 0;
    ll runptr = 0;
    for(ll i = 0; i < app; i++) {
        if(apmSiz[apm - 1] + diff < appSiz[i]) {break;}
        else {
            while(runptr < apm && appSiz[i] - apmSiz[runptr] > diff) {runptr++;}
            if(runptr < apm && abs(apmSiz[runptr] - appSiz[i]) <= diff) {
                sold++; runptr++;
            }
        }
    }
    cout << sold;
}