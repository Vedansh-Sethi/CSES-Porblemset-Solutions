#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long 
#define vll vector<ll>
#define vs vector<string>
#define vpll vector<pair<ll, ll>>
#define pb push_back
using namespace std;


string next_perm(string& inp) {
    ll i = inp.size() - 2;
    string out = inp;
    while(i >= 0) {
        if(out[i + 1] > out[i]) break;
        else i--;
    }
    ll j = inp.size() - 1;
    while(j > i) {
        if(out[j] > out[i]) {
            swap(out[j], out[i]);
            break;
        }
        else j--;
    }
    sort(out.begin() + i + 1, out.end());
    return out;
}

int main() {
    string inp; cin >> inp;
    string sorted = inp;
    sort(sorted.begin(), sorted.end());
    string rev = sorted;
    reverse(rev.begin(), rev.end());
    ll total_perm = 0;
    vs out;
    while (sorted != rev) {
        total_perm++;
        out.pb(sorted);
        sorted = next_perm(sorted);
    }
     total_perm++;
    out.pb(sorted);
    cout << total_perm << '\n';
    for(ll i = 0; i < out.size(); i++) {
        cout << out[i] << '\n';
    }
}