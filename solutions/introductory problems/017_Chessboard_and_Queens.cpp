#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define vll vector<ll>
#define pb push_back
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vpll vector<pair<ll, ll>>
using namespace std;


ll ans = 0;
vb col(8, false), diag1(15, false), diag2(15, false);

void solve(vvc board, ll row) {
    if(row == 8) {
        ans++;
        return;
    }
    for(ll i = 0; i < 8; i++) {
        if(board[row][i] == '.' && !col[i] && !diag1[row + i] && !diag2[row - i + 7]) {
            col[i] = diag1[row + i] = diag2[row-i+7] = true;
            solve(board, row + 1);
            col[i] = diag1[row + i] = diag2[row-i+7] = false;
        }
    }
}

int main() {
    vvc board(8, vc(8));
    for(ll i = 0; i < 8; i++) {
        for(ll j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    solve(board, 0);
    cout << ans;
}


