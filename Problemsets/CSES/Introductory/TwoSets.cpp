#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum & 1) cout << "NO\n";
    else {
        sum >>= 1;
        vector<int> a, b;
        for (int i = n; i > 0; i--) {
            if (sum >= i) a.push_back(i), sum -= i;
            else b.push_back(i);
        }
        cout << "YES\n";
        cout << a.size() << '\n';
        for (int &i : a) cout << i << ' ';
        cout << '\n' << b.size() << '\n';
        for (int &i : b) cout << i << ' ';
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}