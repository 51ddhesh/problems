#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (char &c : s) {
        if (c == 'A') a++;
        else if (c == 'D') b++;
    }
    if (a > b) cout << "Anton\n";
    else if (a < b) cout << "Danik\n";
    else if (a == b) cout << "Friendship\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t = 1; 
    // cin >> t;
    while (t--) solve();
    return 0;
}