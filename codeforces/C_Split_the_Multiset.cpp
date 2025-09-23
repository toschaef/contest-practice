#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s, k; cin >> s >> k;

    if (s == 1) {
        cout << "0\n";
        return;
    }

    cout << (int)(ceil((double)(s-1) / (k-1))) << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}