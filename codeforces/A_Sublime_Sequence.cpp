#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x, n; cin >> x >> n;
    if (n&1) {
        cout << x << '\n';
    } else {
        cout << "0\n";
    }
}
 
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}