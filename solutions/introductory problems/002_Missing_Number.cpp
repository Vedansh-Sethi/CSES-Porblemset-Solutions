#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#define ll long long
using namespace std;

ll number_finder(ll n, vector<ll> sorted_arr) {
    for (int i = 0; i < n; i++) {
        if(sorted_arr[i] + 1 != sorted_arr[i + 1]) {
            return i + 1;
            break;
        }
    }
}

int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    arr[0] = 0;
    for(ll i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << number_finder(n, arr);
}