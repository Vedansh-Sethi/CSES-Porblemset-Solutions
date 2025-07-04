#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t ; i++) {
        ll row, column;
        cin >> row >> column;
        ll layer = max(row, column);
        if (layer % 2 == 0) {
            if(layer == row) {
                cout << layer*layer - column + 1 << "\n";
            }
            else if (layer == column) {
                cout << (layer -1)*(layer -1) + row << "\n";
            }
        }
        if(layer % 2 == 1) {
            if(layer == row) {
                cout << (layer - 1)*(layer - 1) + column << "\n";
            }
            else if (layer == column) {
                cout << layer*layer - row + 1 << "\n";
            }
        }
    }
}