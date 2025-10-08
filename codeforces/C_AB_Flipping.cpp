#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<bool> used(n, false);
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (used[i] || i+1 >= n) continue;
        char curr = s[i], next = s[i + 1];
        if (curr == 'A' && next == 'B') {
            used[i] = true;
            swap(s[i], s[i + 1]);
            count++;
            i = max(i - 2, -1);
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