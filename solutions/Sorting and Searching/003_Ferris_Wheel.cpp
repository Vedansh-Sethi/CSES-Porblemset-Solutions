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
    ll n, max; cin >> n >> max;
    vll arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortall(arr);
    ll minidx = 0, maxidx = n - 1;
    ll out = 0;
    while(minidx <= maxidx) {
        if(arr[minidx] + arr[maxidx] > max) {
            out++;
            maxidx--;
        }
        else {
            out++;
            maxidx--; minidx++;
        }
    }
    cout << out;
}