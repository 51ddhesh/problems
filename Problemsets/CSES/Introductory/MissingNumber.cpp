#include <bits/stdc++.h>
using namespace std;


const int N = 2e5 + 10;
int f[N];
int x; 

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        f[x] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        if (f[i] == 0) {
            cout << i << '\n';
            break;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}