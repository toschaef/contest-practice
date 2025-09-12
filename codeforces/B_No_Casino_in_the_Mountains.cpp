#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<bool> a(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        a[i] = !((bool)m);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] && n > i + k - 1) {
            int start = i;
            bool f = true;
            for (; i < k + start && i < n; i++) {
                if (!a[i]) {
                    f = false;
                    break;
                }
            }
            if (f) {
                count++;
            }
        }
    }
    cout << count << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}