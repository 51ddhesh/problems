#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << '+';
    for (int i = 0; i < n; i++) cout << '-';
    cout << "+\n";
    for (int i = 0; i < n; i++) {
        cout << "|";
        for (int j = 0; j < n; j++) {
            cout << ' ';
        }
        cout << "|\n";
    }
    cout << "+";
    for (int i = 0; i < n; i++) cout << "-";
    cout << "+\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}