#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#include <string>
using namespace std;

ll min_moves(vector<ll> arr) {
    ll moves = 0;
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] >= arr[i + 1]) {
            moves += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }
    return moves;
}

int main() {
    int n;
    cin >> n;
    vector<ll> inp(n);
    for(int i = 0; i < n; i++) {
        cin >> inp[i];
    }
    cout << min_moves(inp);
}