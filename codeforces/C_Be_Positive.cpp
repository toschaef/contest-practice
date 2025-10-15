#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0, ncnt = 0; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 0) {
            cnt++;
        } else if (a[i] == -1) {
            ncnt++;
        }
    }
    if (!(ncnt&1)) {
        cout << cnt << '\n';
    } else {
        cout << cnt + 2 << '\n';
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}