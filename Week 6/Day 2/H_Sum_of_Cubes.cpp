#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
using namespace std;

const int maxN = 1e4;

void solve() {
    vector<ll> pw(maxN);
    for(int i = 0; i < maxN; i++) {
        pw[i] = pow(i+1,3);
    }

    ll x;
    cin >> x;
    bool found = false;

    for(int i = 0; i < maxN; i++) {
        if(pw[i] >= x) {
            break;
        }

        ll l = 0, r = maxN - 1, mid;
        ll need = x - pw[i];
        bool ok = false;

        while(l <= r) {
            mid = (l + r) / 2;
            if(pw[mid] == need) {
                ok = true;
                break;
            }
            else if(pw[mid] > need) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        if(ok) {
            found = true;
            break;
        }
    }
    if(found) {
        yes
    }
    else {
        no
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
