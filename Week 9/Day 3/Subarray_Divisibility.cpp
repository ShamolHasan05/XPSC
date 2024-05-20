#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0, cur = 0;
    map<int, int> mp;
    mp[0] = 1;
    for (int val : a) {
        cur += val;
        int mod = ((cur % n) + n) % n;
        ans += mp[mod];
        mp[mod]++;
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}