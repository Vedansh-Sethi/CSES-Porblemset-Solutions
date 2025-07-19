#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define vvb vector<vb>
#define vpll vector<pair<ll, ll>>
#define pb push_back
using namespace std;

vpll Direcs = {
    {2, 1}, {1, 2}, {-1, 2}, {2, -1}, {-2, -1}, {-1, -2}, {-2, 1}, {1, -2}
};

queue<pair<ll, ll>> order;

vvb aval(1000, vb(1000, false));

vvll board(1000, vll(1000));

vpll adjancencyList(ll i, ll j, ll n) {
    vpll out;
    for(auto [dx, dy] : Direcs) {
        if(i + dx < n && i + dx >= 0 && j + dy < n && j + dy >= 0 ) {
            out.pb({i + dx, j + dy});
        }
    }
    return out;
}

void solve(ll i, ll j, ll n) {
    aval[i][j] = true;
    board[i][j] = 0;
    order.push({i, j});
    while(!order.empty()) {
        pair<ll, ll> curr = order.front();
        ll x = curr.first, y = curr.second;
        order.pop();
        vpll adjList = adjancencyList(x, y, n);
        for(const auto& p : adjList) {
            ll xin = p.first, yin = p.second;
            if(!aval[xin][yin]) {
                aval[xin][yin] = true;
                board[xin][yin] = board[x][y] + 1;
                order.push({xin, yin});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    solve(0, 0, n);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}