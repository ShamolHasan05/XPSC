#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define newline cout<<'\n';
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    
    ll mex = 0;
    for (int i = 0; i <= n; i++) {
        if (mp[i] == 0) {
            mex = i;
            break;
        }
    }

    ll firstOne = -1;
    for (int i = 0; i <= n; i++) {
        if (mp[i] == 1) {
            firstOne = i;
            break;
        }
    }

    ll mex2 = n + 1; 
    if (firstOne != -1) {
        for (int i = firstOne + 1; i <= n; i++) {
            if (mp[i] <= 1) {
                mex2 = i;
                break;
            }
        }
    }

    ll ans = min(mex, mex2);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
