#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, curr = 0;

    for (int i = 0; i < n; i++) {
        if (a[i]) {
            curr = 0;       
        } else {
            curr++;
            ans = max(ans, curr);
        }
    }

    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}