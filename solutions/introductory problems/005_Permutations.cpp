#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#define ll long long
#define vll vector<ll>
using namespace std;

int main() {
    ll n;
    cin >> n;
    vll output_arr(n);
    if (n == 1) {cout << "1";}
    else if (n < 4 && n > 1) {
        cout << "NO SOLUTION" << "\n";
    }
    else if (n == 4) {cout << "2 4 1 3";}
    else {
        if (n % 2 == 1) {
            for(ll i = 0; i <= (n - 1)/2; i++) {
                output_arr[2*i] = i + 1; 
            }
            for(ll i = 1; i <= (n - 1)/ 2; i++) {
                output_arr[2*i - 1] = i + (n + 1)/2;
            }
        }
        if (n % 2 == 0) {
            for(ll i = 0; i < n/2; i++) {
                output_arr[2*i] = i + 1;
            }
            for(ll i = 1; i <= n/2; i++) {
                output_arr[2*i - 1] = n/2 + i;
            }
        }
        string output;
        for(int i = 0; i < n; i++) {
            output += to_string(output_arr[i]) + " ";
        }
        cout << output;
    }
}