#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> preSum(n + 1, 0);
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        preSum[i] = sum;
    }

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        ll ans = preSum[n] - (preSum[r] - preSum[l - 1]) + k * (r - l + 1);
        if (ans % 2 == 1) {
            yes
        } else {
            no
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}
