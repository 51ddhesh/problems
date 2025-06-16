#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if ((s.find("0000000") != string::npos) || (s.find("1111111") != string::npos)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    // cin >> t;
    while(t--) solve();
    return 0;
}