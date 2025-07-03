#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vpii = vector<pii>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using mii = map<int, int>;
using mci = map<char, int>;
using si = set<int>;
using sl = set<ll>;
using sch = set<char>;
#define all(x) begin(x), end(x)

#define loop(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rloop(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define forr(i, v) for (auto &i : v)
#define forit(i, v) for (auto i = v.begin(); i != v.end(); i++)

const int M = 1e9 + 7;
const int NN = 2000000;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> &v) {
    size_t n = v.size();
    for (size_t i = 0; i < n; i++) os << v[i] << ' ';
    return os;
}

template <typename T>
istream& operator>>(istream& is, vector<T> &v) {
    for (auto &i : v) is >> i;
    return is;
}

template <typename X, typename Y>
istream& operator>>(istream& is, pair<X, Y> &p) {
    is >> p.first >> p.second;
    return is;
}

template <typename X, typename Y>
ostream& operator<<(ostream& os, const pair<X, Y> &p) {
    os << p.first << ' ' << p.second << '\n';
    return os;
}

template <typename T>
ostream& operator<<(ostream& os, const set<T> &s) {
    forr(i, s) os << i << ' ';
    return os;
}

template <typename T> 
void debug(T &x) {
    if constexpr (is_same_v<T, bool>) cerr << (x ? "True" : "False") << '\n';
    else if constexpr (is_same_v<T, string>) cerr << '\"' << x << "\"" << '\n';
    else if constexpr (is_same_v<T, char>) cerr << '\'' << x << '\'' << '\n';
    else cerr << x << '\n';
}


bool check(ll n) {
    if (n == 1) return false;
    if (n == 2) return true;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    ll ans = 0;
    for (ll i = 0; i < NN; i++) {
        if (check(i)) ans += i;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifdef LOCAL 
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("err.txt", "w", stderr);
        auto start = chrono::high_resolution_clock::now();
    #endif // LOCAL
    
    int t = 1;
    // cin >> t;
    while(t--) solve();

    #ifdef LOCAL
        auto end = chrono::high_resolution_clock::now();
        auto duration1 = chrono::duration_cast<chrono::microseconds> (end - start);
        auto duration2 = chrono::duration_cast<chrono::milliseconds> (end - start);
        cerr << "Executed in: " << duration1.count() << " μs (" << duration2.count() << " ms)\n";
    #endif // LOCAL

    return 0;
}
