#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;
    string b; cin >> b;
    string c; cin >> c;

    for (int i = 0; i < m; i++) {
        if (c[i] == 'D') {
            a += b[i];
        } else {
            a = b[i] + a;
        }
    }
    cout << a << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}