#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    int x = 0;
    string s;
    while(n--) {
        cin >> s;
        if (s.find("++") != string::npos) {
            x++;
        }   
        else if (s.find("--") != string::npos) {
            x--;
        } 
    }
    cout << x << '\n';
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