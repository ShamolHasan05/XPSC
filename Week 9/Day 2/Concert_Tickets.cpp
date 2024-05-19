#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define newline cout << '\n';
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    multiset<ll> a;
    vector<ll> b(m);

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
        ll k = b[i];
        auto it = a.upper_bound(k);
        if (it == a.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            a.erase(it);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
