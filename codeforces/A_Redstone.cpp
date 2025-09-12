#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        m[t]++;
    }
    for (auto& p : m) {
        if (p.second > 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}